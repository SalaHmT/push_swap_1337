/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:58:29 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/15 21:17:19 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_number(t_list **lst)
{
	t_list	*rot;
	t_list	*tmp;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	rot = ft_lstlast(*lst);
	rot->next = tmp;
	tmp->next = NULL;
}

void	rb(t_list **dst)
{
	rotate_number(dst);
	ft_putstr("rb\n");
}

void	ra(t_list **src)
{
	rotate_number(src);
	ft_putstr("ra\n");
}

void	rr(t_list **src, t_list **dst)
{
	ra(src);
	rb(dst);
	ft_putstr("rr\n");
}
