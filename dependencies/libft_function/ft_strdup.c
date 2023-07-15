/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:22:57 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/13 20:35:51 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	*ft_strdup(const char *str)
{
	char	*strr;
	size_t	i;

	strr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!strr)
		return (strr);
	i = -1;
	while (strr[++i])
		strr[i] = str[i];
	strr[i] = '\0';
	return (strr);
}
