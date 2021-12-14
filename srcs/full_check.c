/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:40:22 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 16:45:42 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

int	full_check(char ***board)
{
	int	i;

	i = 0;
	while (i < COL)
	{
		if ((*board)[ROW - 1][i] == '.')
			return (0);
		i++;
	}
	board_put(*board);
	ft_putendl_fd("  Board is full. Game is draw ...", STDOUT_FILENO);
	return (1);
}
