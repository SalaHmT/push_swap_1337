/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_4_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:11:43 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 15:04:59 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	sort_4_nbr(t_list **src, t_list **dst)
{
	int	min_idx;

	min_idx = get_idx_min_nbr(*src);
	while (ft_lstsize(*src) > 3)
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
	sort_3_nbr(src);
	pa(dst, src);
}
