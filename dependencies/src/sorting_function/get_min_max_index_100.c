/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max_index_100.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:52:59 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 17:38:47 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	sort_100_nbr(t_list **src, t_list **dst)
{
	int	chk;
	int	mv;

	chk = ft_lstsize(*src) / 5;
	mv = chk;
	while (ft_lstsize(*src))
	{
		push_2_stk_b(src, dst, mv, chk);
		mv += chk;
	}
	push_2_stk_a(dst, src);
}

int	get_idx_max_nbr(t_list *lst)
{
	int	max;
	int	idx;
	int	i;

	i = 0;
	idx = 0;
	max = lst->content;
	while (lst)
	{
		if (lst->content > max)
		{
			idx = i;
			max = lst->content;
		}
		i++;
		lst = lst->next;
	}
	return (idx);
}

void	get_idx(t_list *stk)
{
	t_list	*arr;
	t_list	*data;

	data = stk;
	while (arr)
	{
		arr = stk;
		while (arr)
		{
			if (data->content < arr->content)
				arr->pos += 1;
			arr = arr->next;
		}
		data = data->next;
	}
}
