/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:45:13 by shamsate          #+#    #+#             */
/*   Updated: 2023/07/19 02:17:45 by shamsate         ###   ########.fr       */
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
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(const char *str, char c);
char	*ft_substr(char	const *s, unsigned int start, size_t len);
char	*ft_strchr(char *s, int c);
// *** Get_Next_Line ***
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

size_t	ft_strlen_c(char *s);
char	*ft_strjoin_l(char *s1, char *s2);
char	*get_ln(char *backup);
char	*read_ln(int fd, char *backup);
char	*get_sv_and_fr(char *backup);
char	*get_next_line(int fd);
char	*ft_strchr_r(char *s, int c);

//*****************Struct libft *********
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
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
void	free_content(char **str);
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
//**************** Bonus Part ******************
bool	check_in(t_list **src, t_list **dst, char *str);
void	checker(t_list **src, t_list **dst);
void	push_number_b(t_list **src, t_list **dst);
void	reverse_number_b(t_list **lst);
void	rotate_number_b(t_list **lst);
void	swap_number_b(t_list **lst);
void	pa_b(t_list **stk_b, t_list **stk_a);
void	pb_b(t_list **stk_a, t_list **stk_b);
void	rrb_b(t_list **dst);
void	rra_b(t_list **src);
void	rrr_b(t_list **src, t_list **dst);
void	rb_b(t_list **dst);
void	ra_b(t_list **src);
void	rr_b(t_list **src, t_list **dst);
void	sb_b(t_list **dst);
void	sa_b(t_list **src);
void	ss_b(t_list **src, t_list **dst);

#endif