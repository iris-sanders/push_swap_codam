/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 13:32:46 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 13:40:40 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **head)
{
	t_node	*second_last;
	t_node	*last;

	if (*head == NULL || (*head)->next == NULL)
		exit(EXIT_FAILURE);
	last = *head;
	while (last->next != NULL)
		last = last->next;
	second_last = *head;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last->next = *head;
	second_last->next = NULL;
	*head = last;
}

void	reverse_rotate_a(t_node **head_a)
{
	reverse_rotate(head_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_node **head_b)
{
	reverse_rotate(head_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_a_and_b(t_node **head_a, t_node **head_b)
{
	reverse_rotate(head_a);
	reverse_rotate(head_b);
	ft_printf("rrr\n");
}