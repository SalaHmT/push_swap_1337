/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:50:00 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/18 23:51:26 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_number_b(t_list **lst)
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

void	rb_b(t_list **dst)
{
	rotate_number_b(dst);
}

void	ra_b(t_list **src)
{
	rotate_number_b(src);
}

void	rr_b(t_list **src, t_list **dst)
{
	ra_b(src);
	rb_b(dst);
}
