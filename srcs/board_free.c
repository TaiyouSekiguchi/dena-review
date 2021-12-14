/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:39:11 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/10 16:40:16 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	board_free(char **board)
{
	int	i;

	i = 0;
	while (i < ROW)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
