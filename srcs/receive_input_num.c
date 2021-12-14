/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   receive_input_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:51:39 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/12 18:31:55 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yonmoku.h"

static void	do_get_next_line(char **input)
{
	int		gnl_result;

	gnl_result = get_next_line(STDIN_FILENO, input);
	if (gnl_result == ERROR)
		my_error("  get_next_line error in command_receive.");
}

static int	is_column_range(char num)
{
	if (num >= '1' && num <= '7')
		return (1);
	return (0);
}

int	receive_input_num(void)
{
	char	*input;
	int		ret;

	ft_putstr_fd("  Please input lane number or command : ", STDOUT_FILENO);
	do_get_next_line(&input);
	if (!ft_strcmp(input, "reset"))
		ret = RESET;
	else if (!ft_strcmp(input, "exit"))
		ret = EXIT;
	else
	{
		if (ft_strlen(input) != 1 || !is_column_range(input[0]))
		{
			ft_putchar_fd('\n', STDOUT_FILENO);
			ft_putendl_fd("  Please input lane number (1 ~ 7)", STDOUT_FILENO);
			ft_putendl_fd("  Please input \"reset\" or \"exit\"", STDOUT_FILENO);
			ret = MISS;
		}
		else
			ret = input[0] - '0';
	}
	free(input);
	return (ret);
}
