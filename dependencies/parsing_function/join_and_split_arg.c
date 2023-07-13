/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_and_split_arg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:11:38 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 18:55:00 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

char	*join_arg(char **str, int x)
{
	char	*strr;
	char	*tmp;
	int		i;

	i = 1;
	strr = ft_strdup("");
	while (i < x)
	{
		tmp = ft_strjoin(strr, str);
		free(strr);
		strr = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (strr);
}

char	**split_arg(char **str, int x)
{
	char	*strr;
	char	**split;

	strr = join_arg(str, x);
	split = ft_split(strr, ' ');
	free(strr);
	return (split);
}
