/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:45:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/06 17:53:18 by shamsate         ###   ########.fr       */
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
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void	*content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
//********* Parsing *********************
int		arg_len(char **str);
int		is_all_digit(char *str);
char	*join_arg(char **str, int x);
char	**split_arg(char **str, int x);
void	check_if_empty(char **str, int len);
void	free_stack(t_list *stk);
void	free_all_stack(t_list **a, t_list **b);
void	free_data(char **str);

// ******** Error Handling Msg **********
void	check_nbr_error(void);

#endif