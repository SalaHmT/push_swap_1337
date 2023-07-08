/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:45:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/08 18:00:23 by shamsate         ###   ########.fr       */
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
void	check_if_dupl(char **str, int x);
void	check_if_is_nbr(char **str, int x);
int		is_all_digit(char *str);
char	*join_arg(char **str, int x);
char	**split_arg(char **str, int x);
void	check_if_empty(char **str, int len);
void	free_stack(t_list *stk);
void	free_all_stack(t_list **a, t_list **b);
void	free_data(char **str);
bool	check_number(t_list *stk_a);
void	push_stk(t_list **stk_a, char **str);
//************ Movement **********************
void	push_number(t_list **src, t_list **dst);
void	pa(t_list **stk_b, t_list **stk_a);
void	pb(t_list **stk_b, t_list **stk_a);
void	reverse_number(t_list **lst);
void	rra(t_list **src);
void	rrr(t_list **src, t_list **dst);
void	rrb(t_list **dst);
void	rotate_number(t_list **lst);
void	rb(t_list **dst);
void	ra(t_list **src);
void	rr(t_list **src, t_list **dst);
void	swap_number(t_list **lst);
void	sb(t_list **dst);
void	sa(t_list **src);
void	ss(t_list **src, t_list **dst);
//**************** Sorting ******************
int		get_idx_max_nbr(t_list *lst);
int		get_idx_min_nbr(t_list *lst);
int		get_idx_nbr(t_list *dst, int size);
int		get_num(t_list *dst, int idx);
void	get_idx(t_list *stk);
void	sort_2_nbr(t_list **src);
void	sort_3_nbr(t_list	**src);
void	sort_4_nbr(t_list **src, t_list **dst);
void	sort_5_nbr(t_list **src, t_list **dst);
void	push_2_stk_a(t_list **dst, t_list **src);
void	push_2_a(t_list **dst, t_list **src);
void	mv_2_top(t_list **dst, t_list **src, int idx);
void	push_2_stk_b(t_list **src, t_list **dst, int mv, int chk);
void	sort_500_nbr(t_list **src, t_list **dst);
void	sort_100_nbr(t_list **src, t_list **dst);
void	mapping_nbr(t_list **stk_a, t_list **stk_b);
//******** Error Handling Msg **********
void	check_nbr_error(void);

#endif