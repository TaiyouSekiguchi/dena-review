/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:11:38 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 20:14:01 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

static int	do_receive_input_num(char ***board, int *player, int *input_num)
{
	int	ret;

	*input_num = receive_input_num();
	ret = 0;
	if (*input_num == MISS)
		ret = CONTINUE;
	if (*input_num == RESET)
	{
		board_reset(board, player);
		ret = CONTINUE;
	}
	if (*input_num == EXIT)
	{
		ft_putchar_fd('\n', STDOUT_FILENO);
		ft_putendl_fd("  Exit...", STDOUT_FILENO);
		ret = BREAK;
	}
	return (ret);
}

static int	do_game_check(char ***board, int player)
{
	int	ret;

	ret = 0;
	if (clear_check(board, player))
		ret = BREAK ;
	if (full_check(board))
		ret = BREAK ;
	return (ret);
}

static void	main_loop(char ***board, int *player)
{
	int		input_num;
	int		ret;

	while (1)
	{
		board_put(*board);
		turn_put(*player);
		ret = do_receive_input_num(board, player, &input_num);
		if (ret == CONTINUE)
			continue ;
		if (ret == BREAK)
			break ;
		if (!modify_board(board, *player, input_num - 1))
			continue ;
		if (do_game_check(board, *player) == BREAK)
			break ;
		player_switch(player);
	}
}

int	main(void)
{
	char	**board;
	int		player;

	board_init(&board);
	player = FIRST;
	main_loop(&board, &player);
	board_free(board);
	return (0);
}
