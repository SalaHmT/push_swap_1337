/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing_2_stk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:33:27 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 17:38:54 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	push_2_stk_b(t_list **src, t_list **dst, int mv, int chk)
{
	int	i;

	i = 0;
	while (*src && i < chk)
	{
		if ((*src)->pos <= mv)
		{
			if ((*src)->pos < mv - (chk / 2))
			{
				pb(src, dst);
				rb(dst);
			}
			else
				pb(src, dst);
			i++;
		}
		else
			ra(src);
	}
}

void	push_2_stk_a(t_list **dst, t_list **src)
{
	int	max_idx;

	max_idx = get_idx_max_nbr(*dst);
	while (ft_lstsize(*dst))
	{
		if (max_idx == 0)
			pa(dst, src);
		else if (max_idx <= ft_lstsize(*dst) / 2)
			rb(dst);
		else if (max_idx > ft_lstsize(*dst) / 2)
			rrb(dst);
		if (ft_lstsize(*dst))
			max_idx = get_idx_max_nbr(*dst);
	}
}
