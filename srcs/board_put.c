/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:53:31 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 18:27:32 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

static void	lane_num_put(void)
{
	int	i;

	ft_putstr_fd("  ", STDOUT_FILENO);
	i = 1;
	while (i <= COL)
	{
		ft_putnbr_fd(i, STDOUT_FILENO);
		ft_putchar_fd(' ', STDOUT_FILENO);
		i++;
	}
	ft_putstr_fd("\n\n", STDOUT_FILENO);
}

void	board_put(char **board)
{
	int	i;
	int	j;

	ft_putchar_fd('\n', STDOUT_FILENO);
	i = 0;
	while (i < ROW)
	{
		ft_putstr_fd("  ", STDOUT_FILENO);
		j = 0;
		while (j < COL)
		{
			ft_putchar_fd(board[ROW - (i + 1)][j], STDOUT_FILENO);
			ft_putchar_fd(' ', STDOUT_FILENO);
			j++;
		}
		ft_putchar_fd('\n', STDOUT_FILENO);
		i++;
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
	lane_num_put();
}
