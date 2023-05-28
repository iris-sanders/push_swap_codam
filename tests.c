/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/28 16:58:54 by irissanders   #+#    #+#                 */
/*   Updated: 2023/05/28 17:18:47 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_index_test(t_node **head_a)
{
	t_node	*link;

	link = *head_a;
	while (link != NULL)
	{
		ft_printf("%i", link->index);
		link = link->next;
	}
}

int	print_list(t_node *head)
{
	t_node	*link;

	link = head;
	while (link != NULL)
	{
		ft_printf("%i\n", link->value);
		link = link->next;
	}
	return (0);
}
