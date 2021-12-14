/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:01:48 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 17:32:16 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	winner_put(int player)
{
	if (player == FIRST)
		ft_putendl_fd("  FIRST PLAYER WINNER!!", STDOUT_FILENO);
	else
		ft_putendl_fd("  SECOND PLAYER WINNER!!", STDOUT_FILENO);
}
