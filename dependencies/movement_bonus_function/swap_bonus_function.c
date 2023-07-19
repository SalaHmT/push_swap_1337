/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:52:05 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 01:10:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_number_b(t_list **lst)
{
	int	swap;

	if (ft_lstsize(*lst) <= 1)
		return ;
	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
}

void	sb_b(t_list **dst)
{
	swap_number_b(dst);
}

void	sa_b(t_list **src)
{
	swap_number_b(src);
}

void	ss_b(t_list **src, t_list **dst)
{
	swap_number_b(src);
	swap_number_b(dst);
}
