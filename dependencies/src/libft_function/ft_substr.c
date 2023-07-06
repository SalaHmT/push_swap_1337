/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:01:43 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 15:07:52 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
	end = s_len - strat;
	if ( end > len)
		end = len;
	s2 =(char *)malloc(sizeof(char) * (end + 1));
	if ( !s2)
		return (s2);
	while (i < len && strat < ft_strlen(s))
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
