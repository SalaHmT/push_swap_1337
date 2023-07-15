/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:04:11 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/15 19:50:29 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		ft_putstr("(null)");
	while (str[++i])
		ft_putchar(str[i]);
}
