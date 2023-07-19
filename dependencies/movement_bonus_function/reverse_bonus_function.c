/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus_function.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:48:38 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 01:16:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	reverse_number_b(t_list **lst)
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

void	rrb_b(t_list **dst)
{
	reverse_number_b(dst);
}

void	rra_b(t_list **src)
{
	reverse_number_b(src);
}

void	rrr_b(t_list **src, t_list **dst)
{
	reverse_number_b(src);
	reverse_number_b(dst);
}
