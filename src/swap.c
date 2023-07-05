/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 15:38:26 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 17:18:57 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_node **head)
{
	t_node	*first;
	t_node	*second;

	if ((*head) == NULL || (*head)->next == NULL)
		return (0);
	first = (*head);
	second = (*head)->next;
	first->next = second->next;
	second->next = first;
	(*head) = second;
	return (1);
}

void	swap_a(t_node **head_a)
{
	if (swap(head_a))
		ft_printf("sa\n");
}

void	swap_b(t_node **head_b)
{
	if (swap(head_b))
		ft_printf("sb\n");
}

void	swap_a_and_b(t_node **head_a, t_node **head_b)
{
	swap(head_a);
	swap(head_b);
	ft_printf("ss\n");
}
