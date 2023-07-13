/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_is_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:29:00 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 14:20:32 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	is_a_num(char *str)
{
	int	i;

	i = 0;
	if (!str[1] && (str[0] == '+' || str[0] == '-'))
		return (0);
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_if_is_nbr(char **str, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (!str[i][0] || !is_a_num(str[i]))
			check_nbr_error();
		i++;
	}
}
