/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 15:38:26 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 16:44:52 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head)
{
	t_node	*first;
	t_node	*second;
	
	if ((*head) == NULL || (*head)->next == NULL)
		exit(EXIT_FAILURE);
	first = (*head);
	second = (*head)->next;
	first->next = second->next;
	second->next = first;
	(*head) = second;
}

void	swap_a(t_node **head_a)
{
	swap(head_a);
	ft_printf("sa\n");
}

void	swap_b(t_node **head_b)
{
	swap(head_b);
	ft_printf("sb\n");
}

void	swap_a_and_b(t_node **head_a, t_node **head_b)
{
	swap(head_a);
	swap(head_b);
	ft_printf("ss\n");
}
