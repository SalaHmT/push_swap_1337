/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:45:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/04 19:07:35 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <fcntl.h>
# include <stdio.h>

// ******** libft Function **************
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

// ******** Error Handling Msg ***********
void	check_nbr_error(void);

#endif