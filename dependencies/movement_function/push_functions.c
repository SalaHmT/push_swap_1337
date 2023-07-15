/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:47:02 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/13 20:36:08 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_number(t_list **src, t_list **dst)
{
	t_list	*push;

	if (!ft_lstsize(*src))
		return ;
	push = *src;
	*src = (*src)->next;
	push->next = NULL;
	ft_lstadd_front(dst, push);
}

void	pa(t_list **stk_b, t_list **stk_a)
{
	push_number(stk_b, stk_a);
	ft_putstr("pa\n");
}

void	pb(t_list **stk_b, t_list **stk_a)
{
	push_number(stk_a, stk_b);
	ft_putstr("pb\n");
}
