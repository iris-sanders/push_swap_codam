/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 12:18:16 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 12:31:10 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **head_a, t_node **head_b)
{
	t_node	*temp;
	
	if ((*head_a) == NULL)
		exit(EXIT_FAILURE);
	temp = (*head_a)->next;
	(*head_a)->next = (*head_b);
	(*head_b) = (*head_a);
	(*head_a) = temp;
}

void	push_a(t_node **head_b, t_node **head_a)
{
	push(head_b, head_a);
	ft_printf("pa\n");
}

void	push_b(t_node **head_a, t_node **head_b)
{
	push(head_a, head_b);
	ft_printf("pb\n");
}
