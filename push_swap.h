/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:13:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/19 17:29:49 by isanders      ########   odam.nl         */
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
int		print_list(char **argv);
int		input_is_number(char *argv);
int		check_valid_input(char **argv);
void	ft_error(char *str);
int		duplicate_check(int argc, char **argv);
int		atoi_min_max(const char *str);

#endif