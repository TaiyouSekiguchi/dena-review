/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:47:49 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 17:31:54 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

static int	row_lane_check(char	***board, int row, int col, char stone)
{
	int		stone_cnt;

	if (ROW - row < 4)
		return (0);
	stone_cnt = 0;
	while (row < ROW)
	{
		if ((*board)[row][col] != stone)
			return (0);
		stone_cnt++;
		if (stone_cnt == 4)
			return (1);
		row++;
	}
	return (0);
}

static int	col_lane_check(char	***board, int row, int col, char stone)
{
	int		stone_cnt;

	if (COL - col < 4)
		return (0);
	stone_cnt = 0;
	while (col < COL)
	{
		if ((*board)[row][col] != stone)
			return (0);
		stone_cnt++;
		if (stone_cnt == 4)
			return (1);
		col++;
	}
	return (0);
}

static int	diagonal_check_1(char	***board, int row, int col, char stone)
{
	int		stone_cnt;

	if (ROW - row < 4
		|| COL - col < 4)
		return (0);
	stone_cnt = 0;
	while (row < ROW && col < COL)
	{
		if ((*board)[row][col] != stone)
			return (0);
		stone_cnt++;
		if (stone_cnt == 4)
			return (1);
		row++;
		col++;
	}
	return (0);
}

static int	diagonal_check_2(char	***board, int row, int col, char stone)
{
	int		stone_cnt;

	if (row < 3
		|| COL - col < 4)
		return (0);
	stone_cnt = 0;
	while (row >= 0 && col < COL)
	{
		if ((*board)[row][col] != stone)
			return (0);
		stone_cnt++;
		if (stone_cnt == 4)
			return (1);
		row--;
		col++;
	}
	return (0);
}

int	clear_check(char ***board, int player)
{
	int		i;
	int		j;
	char	stone;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while (j < COL)
		{
			stone_set(player, &stone);
			if (row_lane_check(board, i, j, stone)
				|| col_lane_check(board, i, j, stone)
				|| diagonal_check_1(board, i, j, stone)
				|| diagonal_check_2(board, i, j, stone))
			{
				board_put(*board);
				winner_put(player);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
