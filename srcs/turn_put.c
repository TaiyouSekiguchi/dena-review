/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turn_put.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:09:24 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 16:48:49 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	turn_put(int player)
{
	if (player == FIRST)
		ft_putendl_fd("  FIRST PLAYER TURN.", STDOUT_FILENO);
	else
		ft_putendl_fd("  SECOND PLAYER TURN.", STDOUT_FILENO);
}
