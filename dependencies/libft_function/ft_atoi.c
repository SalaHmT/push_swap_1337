/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:56:58 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 06:14:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	error_msg(void)
{
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	nbr;
	int			sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
		if (nbr > 2147483647 && sign == 1)
			error_msg();
		else if (nbr > 2147483648 && sign == -1)
			error_msg();
	}
	return ((int )nbr * sign);
}
