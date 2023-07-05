/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 13:19:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/27 17:07:20 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_node **head)
{
	t_node	*last;
	t_node	*first;

	if (*head == NULL || (*head)->next == NULL)
		return (0);
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	first = *head;
	*head = (*head)->next;
	first->next = NULL;
	last->next = first;
	return (1);
}

void	rotate_a(t_node **head_a)
{
	if (rotate(head_a))
		ft_printf("ra\n");
}

void	rotate_b(t_node **head_b)
{
	if (rotate(head_b))
		ft_printf("rb\n");
}

void	rotate_a_and_b(t_node **head_a, t_node **head_b)
{
	rotate(head_a);
	rotate(head_b);
	ft_printf("rr\n");
}
