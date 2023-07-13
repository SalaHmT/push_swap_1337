# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamsate <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 16:12:40 by shamsate          #+#    #+#              #
#    Updated: 2023/07/13 18:42:33 by shamsate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = CC

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

HEADER = include/push_swap.h

MON_FILES = dependencies/libft_function/ft_atoi dependencies/src/libft_function/ft_isdigit.c \
			dependencies/src/libft_function/ft_lstadd_front.c dependencies/src/libft_function/ft_lstlast.c \
			dependencies/src//libft_function/ft_lstnew.c dependencies/src/libft_function/ft_lstsize.c \
			dependencies/src/libft_function/ft_putchar.c dependencies/src/libft_function/ft_putstr.c \
			dependencies/src/libft_function/ft_split.c dependencies/src/libft_function/ft_strcmp.c \
			dependencies/src/libft_function/ft_strdup.c dependencies/src/libft_function/ft_strjoin.c \
			dependencies/src/libft_function/ft_strlcpy.c dependencies/src/libft_function/ft_strlen.c \
			dependencies/src/libft_function/ft_substr.c dependencies/src/movement_function/push_functions.c \
			dependencies/src/movement_function/reverse_functions.c dependencies/src/movement_function/rotate_functions.c \
			dependencies/src/movement_function/swap.functions.c dependencies/src/parsing_function/arg_len.c \
			dependencies/src/parsing_function/check_if_dupl.c dependencies/src/parsing_function/check_if_empty.c \
			dependencies/src/parsing_function/check_if_is_nbr.c dependencies/src/parsing_function/error_function_handling.c \
			dependencies/src/parsing_function/free_all_stacks.c dependencies/src/parsing_function/join_and_split_arg.c \
			dependencies/src/parsing_function/stack_pushing.c dependencies/src/sorting_function/ dependencies/src/sorting_function/get_idx_and_mv_push_500.c \
			dependencies/src/sorting_function/get_min_max_index_100.c dependencies/src/sorting_function/pushing_2_stk.c \
			dependencies/src/sorting_function/sorting_2_nbr.c dependencies/src/sorting_function/sorting_3_nbr.c \
			dependencies/src/sorting_function/sorting_4_nbr.c dependencies/src/sorting_function/sorting_5_nbr.c \
			push_swap.c \

MON_SRC   = $(MON_FILES:=.c)
MON_OBJS  = $(MON_FILES:=.o)

all : $(NAME)

$(NAME): $(MON_OBJS) $(HEADER)
		@echo "  - Compilation Starting $(NAME)..\n"
		@ $(CC) $(CFLAGS) $(MON_OBJS) -o $(NAME)
		@echo " - Execution ready..\n"
	
%.o: %.c $(HEADER)
		@echo "- Making Object file $(notdir $@) from source file $(notdir $<)...\n"
		@ $(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(MON_OBJS)
		@echo "\nObject Files Removed.. \n"
	
fclean: clean
		@$(RM) $(NAME)
		@echo "\nRemoved Done .. \n"

re : fclean all 
		
.PHONY: all clean fclean re 
