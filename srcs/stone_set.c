/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stone_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:43:38 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/10 14:44:39 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

void	stone_set(int player, char *stone)
{
	if (player == FIRST)
		*stone = 'o';
	else
		*stone = 'x';
}
