/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_dupl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:58:50 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 14:21:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	check_if_dupl(char **str, int x)
{
	int	i;
	int	j;

	i = -1;
	while (++i < x)
	{
		j = i + x;
		while (j < x)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				ft_putstr("Duplicate Number ... Not Allowed :(\n");
			j++;
		}
	}
}
