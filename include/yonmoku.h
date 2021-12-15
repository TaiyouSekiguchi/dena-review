/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yonmoku.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:01:29 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/15 10:38:42 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YONMOKU_H
# define YONMOKU_H

# include "libft.h"
# include "get_next_line.h"

typedef enum e_player
{
	FIRST,
	SECOND,
}			t_player;

typedef enum e_board
{
	ROW = 6,
	COL = 7,
	CLEAR_NUM = 4,
}			t_board;

typedef enum e_return
{
	MISS = -1,
	RESET = -2,
	EXIT = -3,
	CONTINUE = -4,
	BREAK = -5,
}			t_return;

void	my_error(char *msg);
void	board_init(char ***board);
void	board_put(char **board);
int		receive_input_num(void);
int		modify_board(char ***board, int player, int col);
void	stone_set(int player, char *stone);
void	player_switch(int *player);
int		clear_check(char ***board, int player);
void	winner_put(int player);
void	turn_put(int player);
void	board_free(char **board);
void	board_reset(char ***board, int *player);
int		full_check(char ***board);

#endif
