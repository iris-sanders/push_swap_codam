/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 12:18:16 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 17:14:37 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_node **head_a, t_node **head_b)
{
	t_node	*temp;

	if ((*head_a) == NULL)
		return (0);
	temp = (*head_a)->next;
	(*head_a)->next = (*head_b);
	(*head_b) = (*head_a);
	(*head_a) = temp;
	return (1);
}

void	push_a(t_node **head_b, t_node **head_a)
{
	if (push(head_b, head_a))
		ft_printf("pa\n");
}

void	push_b(t_node **head_a, t_node **head_b)
{
	if (push(head_a, head_b))
		ft_printf("pb\n");
}
