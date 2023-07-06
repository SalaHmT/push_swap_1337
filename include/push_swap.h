/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:45:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 16:12:03 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <fcntl.h>
# include <stdio.h>

//********* Struct *********************
typedef struct s_list
{
	int				content;
	int				pos;
	struct s_list	*next;
}							t_list;

// ******** libft Function *************
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(const char *str, char c);
char	*ft_substr(char	const *s, unsigned int start, size_t len);
//*****************Struct libft *********
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void	*content);
t_list	*ft_lstlast(t_list *lst);
// ******** Error Handling Msg **********
void	check_nbr_error(void);

#endif