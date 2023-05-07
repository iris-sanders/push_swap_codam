/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:13:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 17:22:47 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_node {
	int				value;
	struct s_node	*next;
}	t_node;

int		ft_atoi(const char *str);
t_node	*create_new_node(int number);
t_node	*create_list_a(char **argv);
int		print_list(t_node *head);
int		is_correct_input(int argc, char **argv);
int		input_is_number(char *argv);
int		check_valid_input(char **argv);
void	ft_error(char *str);
int		duplicate_check(int argc, char **argv);
int		atoi_min_max(char *str);
void	swap(t_node **head);
void	swap_a(t_node **head_a);
void	swap_b(t_node **head_b);
void	swap_a_and_b(t_node **head_a, t_node **head_b);
void	push(t_node **head_a, t_node **head_b);
void	push_a(t_node **head_b, t_node **head_a);
void	push_b(t_node **head_a, t_node **head_b);
void	rotate(t_node **head);
void	rotate_a(t_node **head_a);
void	rotate_b(t_node **head_b);
void	rotate_a_and_b(t_node **head_a, t_node **head_b);
void	reverse_rotate(t_node **head);
void	reverse_rotate_a(t_node **head_a);
void	reverse_rotate_b(t_node **head_b);
void	reverse_rotate_a_and_b(t_node **head_a, t_node **head_b);
int		count_nodes(t_node **head);

#endif