/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:11:59 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 17:47:32 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

static int	isstone(char on_board)
{
	if (on_board == 'o' || on_board == 'x')
		return (1);
	return (0);
}

int	modify_board(char ***board, int player, int col)
{
	char		stone;
	char		on_board;
	int			row;

	stone_set(player, &stone);
	row = 0;
	on_board = (*board)[row][col];
	while (isstone(on_board))
	{
		row++;
		if (row >= ROW)
		{
			ft_putchar_fd('\n', STDOUT_FILENO);
			ft_putendl_fd("  This lane is full.\n", STDOUT_FILENO);
			return (0);
		}
		on_board = (*board)[row][col];
	}
	(*board)[row][col] = stone;
	return (1);
}
