/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:52:17 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 17:21:28 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	board_init(char ***board)
{
	int	i;
	int	j;

	*board = (char **)malloc(sizeof(char *) * ROW);
	if (*board == NULL)
		my_error("  Malloc error in board_init.");
	i = 0;
	while (i < ROW)
	{
		(*board)[i] = (char *)malloc(sizeof(char) * COL);
		if ((*board)[i] == NULL)
			my_error("  Malloc error in board_init.");
		j = 0;
		while (j < COL)
		{
			(*board)[i][j] = '.';
			j++;
		}
		i++;
	}
}
