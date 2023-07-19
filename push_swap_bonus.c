/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:24:40 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 02:13:13 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

bool	check_in(t_list **src, t_list **dst, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		return (sa_b(src), true);
	else if (!ft_strcmp(str, "sb\n"))
		return (sb_b(dst), true);
	else if (!ft_strcmp(str, "ss\n"))
		return (ss_b(src, dst), true);
	else if (!ft_strcmp(str, "pa\n"))
		return (pa_b(dst, src), true);
	else if (!ft_strcmp(str, "pb\n"))
		return (pb_b(src, dst), true);
	else if (!ft_strcmp(str, "ra\n"))
		return (ra_b(src), true);
	else if (!ft_strcmp(str, "rb\n"))
		return (rb_b(dst), true);
	else if (!ft_strcmp(str, "rr\n"))
		return (rr_b(src, dst), true);
	else if (!ft_strcmp(str, "rra\n"))
		return (rra_b(src), true);
	else if (!ft_strcmp(str, "rrb\n"))
		return (rrb_b(dst), true);
	else if (!ft_strcmp(str, "rrr\n"))
		return (rrr_b(src, dst), true);
	else
		return (false);
	return (false);
}

void	checker(t_list **src, t_list **dst)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!check_in(src, dst, str))
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (check_number(*src) && !(*dst))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
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
	checker(&stk_a, &stk_b);
	free_all_stack(&stk_a, &stk_b);
	free_content(str);
	return (EXIT_SUCCESS);
}
