/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pushing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:44:53 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 15:00:32 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

bool	check_number(t_list *stk_a)
{
	if (!ft_lstsize(stk_a))
		return (false);
	while (stk_a->next)
	{
		if (stk_a->content > stk_a->next->content)
			return (false);
		else
			stk_a = stk_a->next;
	}
	return (true);
}

void	push_stk(t_list **stk_a, char **str)
{
	int	len;

	len = arg_len(str);
	check_if_dupl(str, len);
	check_if_is_nbr(str, len);
	while (len)
		ft_lstadd_front(stk_a, ft_lstnew(ft_atoi(str[--len])));
}
