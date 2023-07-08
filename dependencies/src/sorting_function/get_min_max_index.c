/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:22:07 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 14:34:36 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

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
