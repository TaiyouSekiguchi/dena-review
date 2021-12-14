/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_switch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:39:04 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/10 15:39:25 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	player_switch(int *player)
{
	if (*player == FIRST)
		*player = SECOND;
	else
		*player = FIRST;
}
