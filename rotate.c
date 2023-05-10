/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 13:19:45 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/10 13:08:27 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **head)
{
	t_node	*last;
	t_node	*first;

	if (*head == NULL || (*head)->next == NULL)
		exit(EXIT_FAILURE);
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	first = *head;
	*head = (*head)->next;
	first->next = NULL;
	last->next = first;
}

void	rotate_a(t_node **head_a)
{
	rotate(head_a);
	ft_printf("ra\n");
}

void	rotate_b(t_node **head_b)
{
	rotate(head_b);
	ft_printf("rb\n");
}

void	rotate_a_and_b(t_node **head_a, t_node **head_b)
{
	rotate(head_a);
	rotate(head_b);
	ft_printf("rr\n");
}
