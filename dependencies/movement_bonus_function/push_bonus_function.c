/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:45:24 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/18 23:48:08 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_number_b(t_list **src, t_list **dst)
{
	t_list	*push;

	if (!ft_lstsize(*src))
		return ;
	push = *src;
	*src = (*src)->next;
	push->next = NULL;
	ft_lstadd_front(dst, push);
}

void	pa_b(t_list **stk_b, t_list **stk_a)
{
	push_number_b(stk_b, stk_a);
}

void	pb_b(t_list **stk_a, t_list **stk_b)
{
	push_number_b(stk_a, stk_b);
}
