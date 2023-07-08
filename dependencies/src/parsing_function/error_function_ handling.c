/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_function_ handling.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:40:44 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 17:53:34 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	check_nbr_error(void)
{
	ft_putstr("Error : Something rong in reading number ... :) \n");
	exit(EXIT_FAILURE);
}
