/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:12:54 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 20:44:51 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	mapping_nbr(t_list **stk_a, t_list **stk_b)
{
	int	size;

	size = ft_lstsize(*stk_a);
	if (!check_number(*stk_a))
	{
		if (size == 2)
			sort_2_nbr(stk_a);
		else if (size == 3)
			sort_3_nbr(stk_a);
		else if (size == 4)
			sort_4_nbr(stk_a, stk_b);
		else if (size == 5)
			sort_5_nbr(stk_a, stk_b);
		else if (size > 5 && size <= 200)
			sort_100_nbr(stk_a, stk_b);
		else if (size > 200)
			sort_500_nbr(stk_a, stk_b);
	}
	free_all_stk(stk_a, stk_b);
}

int	main(int argc, char **argv)
{
	t_list	*stk_a;
	t_list	*stk_b;
	char	**str;

	stk_a = NULL;
	stk_b = NULL;
	if (argc == 1)
		return (0);
	check_if_empty(argv, argc);
	str = split_arg(argv, argc);
	push_stk(&stk_a, str);
	get_idx(stk_a);
	mapping_nbr(&stk_a, &stk_b);
	free_content(str);
	return (EXIT_SUCCESS);
}
