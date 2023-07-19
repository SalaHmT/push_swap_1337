/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:44:17 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 20:42:26 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_stk(t_list *stk)
{
	t_list	*data;

	while (stk)
	{
		data = stk;
		stk = stk->next;
		free(data);
	}
}

void	free_all_stk(t_list **a, t_list **b)
{
	free_stk(*a);
	free_stk(*b);
}

void	free_content(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		free (str[i]);
	}
	free(str);
}
