/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_4_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:11:43 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 16:03:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	get_idx_min_nbr(t_list *lst)
{
	int	min;
	int	idx;
	int	i;

	i = 0;
	idx = 0;
	min = lst->content;
	while (lst)
	{
		if (lst->content < min)
		{
			idx = i;
			min = lst->content;
		}
		i++;
		lst = lst->next;
	}
	return (idx);
}

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
