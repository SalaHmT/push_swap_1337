/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:37:15 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/15 20:05:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_5_nbr(t_list **src, t_list **dst)
{
	int	min_idx;

	min_idx = get_idx_min_nbr(*src);
	while (ft_lstsize(*src) > 4)
	{
		if (check_number(*src) && (!dst))
			return ;
		if (min_idx == 0)
			pb(src, dst);
		else if (min_idx <= 2)
			ra(src);
		else if (min_idx > 2)
			rra(src);
		min_idx = get_idx_min_nbr(*src);
	}
	sort_4_nbr(src, dst);
	pa(dst, src);
}
