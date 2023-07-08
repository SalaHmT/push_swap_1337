/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:23:35 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 17:53:41 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	is_all_digit(char *str)
{
	int	i;

	i = -1;
	while (str[i])
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
	return (0);
}

void	check_if_empty(char **str, int len)
{
	int	i;

	i = 0;
	while (++i < len)
	{
		if (!is_all_digit(str[i]))
			ft_pustr("Error : Must be all numbers... :(\n");
	}
}
