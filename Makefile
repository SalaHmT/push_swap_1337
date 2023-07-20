# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 21:02:38 by shamsate          #+#    #+#              #
#    Updated: 2023/07/21 00:21:38 by shamsate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BN_NAME = checker

CC = CC

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

HEADER = include/push_swap.h

MON_FILES = dependencies/libft_function/ft_atoi.c dependencies/libft_function/ft_isdigit.c \
			dependencies/libft_function/ft_lstadd_front.c dependencies/libft_function/ft_lstlast.c \
			dependencies//libft_function/ft_lstnew.c dependencies/libft_function/ft_lstsize.c \
			dependencies/libft_function/ft_putchar.c dependencies/libft_function/ft_putstr.c \
			dependencies/libft_function/ft_split.c dependencies/libft_function/ft_strcmp.c \
			dependencies/libft_function/ft_strdup.c dependencies/libft_function/ft_strjoin.c \
			dependencies/libft_function/ft_strlcpy.c dependencies/libft_function/ft_strlen.c \
			dependencies/libft_function/ft_substr.c dependencies/movement_function/push_functions.c \
			dependencies/movement_function/reverse_functions.c dependencies/movement_function/rotate_functions.c \
			dependencies/movement_function/swap_functions.c dependencies/parsing_function/arg_len.c \
			dependencies/parsing_function/check_if_dupl.c dependencies/parsing_function/check_if_empty.c \
			dependencies/parsing_function/check_if_is_nbr.c \
			dependencies/parsing_function/free_all_stacks.c dependencies/parsing_function/join_and_split_arg.c \
			dependencies/parsing_function/stack_pushing.c dependencies/sorting_function/get_idx_and_mv_push_500.c \
			dependencies/sorting_function/get_min_max_index_100.c dependencies/sorting_function/pushing_2_stk.c \
			dependencies/sorting_function/sorting_2_nbr.c dependencies/sorting_function/sorting_3_nbr.c \
			dependencies/sorting_function/sorting_4_nbr.c dependencies/sorting_function/sorting_5_nbr.c \
			push_swap.c creator.c\

BONUS_FILES = dependencies/libft_function/ft_atoi.c dependencies/libft_function/ft_isdigit.c \
			dependencies/libft_function/ft_lstadd_front.c dependencies/libft_function/ft_lstlast.c \
			dependencies//libft_function/ft_lstnew.c dependencies/libft_function/ft_lstsize.c \
			dependencies/libft_function/ft_putchar.c dependencies/libft_function/ft_putstr.c \
			dependencies/libft_function/ft_split.c dependencies/libft_function/ft_strcmp.c \
			dependencies/libft_function/ft_strdup.c dependencies/libft_function/ft_strjoin.c \
			dependencies/libft_function/ft_strlcpy.c dependencies/libft_function/ft_strlen.c \
			dependencies/libft_function/ft_substr.c dependencies/parsing_function/arg_len.c \
			dependencies/parsing_function/check_if_dupl.c dependencies/parsing_function/check_if_empty.c \
			dependencies/parsing_function/check_if_is_nbr.c \
			dependencies/parsing_function/free_all_stacks.c dependencies/parsing_function/join_and_split_arg.c \
			dependencies/parsing_function/stack_pushing.c  dependencies/get_next_line/get_next_line_utils.c dependencies/get_next_line/get_next_line.c \
			dependencies/movement_bonus_function/push_bonus_function.c dependencies/movement_bonus_function/reverse_bonus_function.c \
			dependencies/movement_bonus_function/rotate_bonus_function.c dependencies/movement_bonus_function/swap_bonus_function.c \
			push_swap_bonus.c creator_bonus.c\

MON_OBJS  = $(MON_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

all : $(NAME)

$(NAME): $(MON_OBJS) $(HEADER)
		@echo "  - Compilation Starting $(NAME)..\n"
		@ $(CC) $(CFLAGS) $(MON_OBJS) -o $(NAME)
		@echo " - Execution <./push_swap> ready..\n"

%.o: %.c $(HEADER)
		@echo "- Making Object file $(notdir $@) from source file $(notdir $<)...\n"
		@ $(CC) $(CFLAGS) -c $< -o $@

bonus: $(BN_NAME)

$(BN_NAME): $(BONUS_OBJS) $(HEADER)
	@$(CC) $(CFLAGS) $(BONUS_OBJS) -o $(BN_NAME)
	@echo "BONUS - Execution <./checker> ready..\n"

clean:
		@$(RM) $(MON_OBJS) $(BONUS_OBJS)
		@echo "\n Object Files Removed.. \n"

fclean: clean
		@$(RM) $(NAME) $(BN_NAME)
		@echo "\n Removed Done .. \n"

re : fclean all

re_bn : fclean bonus

.PHONY: all clean fclean re bonus re_bn
