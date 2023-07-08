/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:56:03 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 14:06:28 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	sort_3_nbr(t_list	**src)
{
	int	tmp;
	int	tmpo;
	int	tmpor;

	tmp = (*src)->content;
	tmpo = (*src)->next->content;
	tmpor = (*src)->next->next->content;
	if (tmp > tmpo && tmp < tmpor)
		sa(src);
	else if (tmp > tmpo && tmpo > tmpor)
	{
		sa(src);
		rra(src);
	}
	else if (tmp < tmpo && tmp > tmpor)
		rra(src);
	else if (tmp > tmpor && tmp > tmpo)
		ra(src);
	else if (tmp < tmpor && tmpor < tmpo)
	{
		sa(src);
		ra(src);
	}
}
