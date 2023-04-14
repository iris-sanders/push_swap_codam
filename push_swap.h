/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:13:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/12 15:21:15 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <stdlib.h>

typedef struct s_node {
	int	value;
	struct s_node *next;
} t_node;

int		ft_atoi(const char *str);
t_node	*create_new_node(int number);
t_node	*create_list_a(char **argv);
int		 print_list(char **argv);


#endif
