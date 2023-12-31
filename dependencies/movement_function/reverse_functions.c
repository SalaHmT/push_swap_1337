/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:27:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/15 21:16:36 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	reverse_number(t_list **lst)
{
	t_list	*rev;
	t_list	*tmp;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp = *lst;
	rev = ft_lstlast(tmp);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(lst, rev);
}

void	rrb(t_list **dst)
{
	reverse_number(dst);
	ft_putstr("rrb\n");
}

void	rra(t_list **src)
{
	reverse_number(src);
	ft_putstr("rra\n");
}

void	rrr(t_list **src, t_list **dst)
{
	reverse_number(src);
	reverse_number(dst);
	ft_putstr("rrr\n");
}
