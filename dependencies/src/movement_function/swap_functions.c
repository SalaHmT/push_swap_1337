/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:37:52 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 13:43:07 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	swap_number(t_list **lst)
{
	int	swap;

	if (ft_lstsize(*lst) <= 1)
		return ;
	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
}

void	sb(t_list **dst)
{
	swap_number(dst);
	ft_putstr("sb\n");
}

void	sa(t_list **src)
{
	swap_number(src);
	ft_putstr("sa\n");
}

void	ss(t_list **src, t_list **dst)
{
	swap_number(src);
	swap_number(dst);
	ft_putstr("ss\n");
}
