/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:13:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/23 14:23:26 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_node {
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

//main.c 
int		is_correct_input(int argc, char **argv);

//create_list.c
t_node	*create_new_node(int number);
t_node	*create_list_a(char **argv);
int		print_list(t_node *head);

//error.c
void	ft_error(void);

//input_check.c
int		check_valid_input(char **argv);
int		input_is_number(char *argv);
int		duplicate_check(int argc, char **argv);
int		atoi_min_max(char *str);

//push.c
void	push(t_node **head_a, t_node **head_b);
void	push_a(t_node **head_b, t_node **head_a);
void	push_b(t_node **head_a, t_node **head_b);

//reverse_rotate.c
void	reverse_rotate(t_node **head);
void	reverse_rotate_a(t_node **head_a);
void	reverse_rotate_b(t_node **head_b);
void	reverse_rotate_a_and_b(t_node **head_a, t_node **head_b);

//rotate.c
void	rotate(t_node **head);
void	rotate_a(t_node **head_a);
void	rotate_b(t_node **head_b);
void	rotate_a_and_b(t_node **head_a, t_node **head_b);

//swap.c
void	swap(t_node **head);
void	swap_a(t_node **head_a);
void	swap_b(t_node **head_b);
void	swap_a_and_b(t_node **head_a, t_node **head_b);

//sort.c
int		node_count(t_node **head);
void	index_presort(t_node **head_a);
void	print_index_test(t_node **head_a);
int		a_is_not_sorted(t_node **head_a, t_node **head_b);
void	radix_sort(t_node **head_a, t_node **head_b);
void	two_sort(t_node **head_a, t_node **head_b);
void	three_sort(t_node **head_a, t_node **head_b);
int		find_max_index(t_node **head_a);
void	five_sort(t_node **head_a, t_node **head_b);
void	sort(t_node **head_a, t_node **head_b);
int		find_low_index(t_node **head_a);
void	four_sort(t_node **head_a, t_node **head_b);



#endif