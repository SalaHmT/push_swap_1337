/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:39:36 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/15 20:59:56 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static	int	cnt_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str && c && *str == c)
			str++;
		count++;
	}
	return (count);
}

static char	*allo_word(const char *str, char c)
{
	char	*word;
	int		count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	word = (char *)malloc(sizeof(char) * (count + 1));
	if (!word)
		return (0);
	ft_strlcpy(word, str, count + 1);
	return (word);
}

static char	**ft_free(char **buf)
{
	int		i;

	i = 0;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**arr;
	int		i;

	if (str == 0)
		return (0);
	while (*str && *str == c)
		str++;
	arr = (char **)malloc(sizeof(char *) * (cnt_words(str, c) + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*str)
	{
		arr[i] = allo_word(str, c);
		if (arr[i] == NULL)
			return (ft_free(arr));
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
