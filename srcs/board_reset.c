/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_reset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:28:12 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 20:12:59 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	board_reset(char ***board, int *player)
{
	int	i;
	int	j;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while (j < COL)
		{
			(*board)[i][j] = '.';
			j++;
		}
		i++;
	}
	*player = FIRST;
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putendl_fd("  Board reset.", STDOUT_FILENO);
}
