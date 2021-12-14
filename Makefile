# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsekiguc <tsekiguc@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 17:08:25 by tsekiguc          #+#    #+#              #
#    Updated: 2021/12/14 09:12:11 by tsekiguc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YONMOKU			=	yonmoku
SRCS			=	main.c\
					get_next_line.c\
					get_next_line_utils.c\
					board_init.c\
					board_put.c\
					my_error.c\
					receive_input_num.c\
					modify_board.c\
					stone_set.c\
					player_switch.c\
					clear_check.c\
					winner_put.c\
					turn_put.c\
					board_free.c\
					board_reset.c\
					full_check.c
OBJS_DIR		=	./objs
OBJS			=	$(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I./include -I./libft
LIBFT			=	-L./libft -lft
RM				=	rm -f

.PHONY			:	all clean fclean re

vpath %.h include
vpath %.c srcs

all				:	$(YONMOKU)

$(YONMOKU)		:	$(OBJS)
#					make -C libft
					$(CC) $(OBJS) $(CFLAGS) $(LIBFT) -o $@

$(OBJS_DIR)/%.o	:	%.c
					@[ -d $(OBJS_DIR) ]
					$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean			:
#					make clean -C libft
					$(RM) $(OBJS)

fclean			:
#					make fclean -C libft
					$(RM) $(OBJS) $(YONMOKU) 

re				:	fclean all
