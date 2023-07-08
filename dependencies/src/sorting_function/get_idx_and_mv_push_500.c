/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_idx_and_mv_push_500.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:23 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 16:47:50 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	get_idx_nbr(t_list *dst, int size)
{
	int	idx;

	idx = 0;
	while (dst)
	{
		if (dst->pos == size)
			break ;
		dst = dst->next;
	}
	return (idx);
}

int	get_num(t_list *dst, int idx)
{
	int	size;
	int	pos;

	size = ft_lstsize(dst);
	pos = get_idx_nbr(dst, idx);
	if (pos > size - pos)
		return (size - pos);
	return (pos);
}

void	mv_2_top(t_list **dst, t_list **src, int idx)
{
	int	i;
	int	size;

	i = -1;
	size = ft_lstsize(*dst);
	if (idx <= (size / 2))
	{
		while (++i < idx)
			rb(dst);
	}
	else
	{
		while (++i < size - idx)
			rrb(dst);
	}
	pa(dst, src);
}

void	push_2_a(t_list **dst, t_list **src)
{
	int	idx_r;
	int	idx_m;
	int	size;

	size = ft_lstsize(*dst) - 1;
	while (dst)
	{
		if (get_num(dst, size) <= get_num(*dst, size - 1))
		{
			idx_m = get_idx_nbr(*dst, size);
			mv_2_top(dst, src, idx_m);
		}
		else
		{
			idx_r = get_idx_nbr(*dst, size - 1);
			mv_2_top(dst, src, idx_r);
			idx_m = get_idx_nbr(*dst, size);
			mv_2_top(dst, src, idx_m);
			sa(src);
			size--;
		}
	}
}
