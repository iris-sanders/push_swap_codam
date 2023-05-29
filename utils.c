/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 14:01:31 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/29 18:58:24 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

int	node_count(t_node **head)
{
	int		count;
	t_node	*node_a;

	count = 0;
	node_a = *head;
	while (node_a != NULL)
	{
		node_a = node_a->next;
		count++;
	}
	return (count);
}

int	find_max_index(t_node **head_a)
{
	int		max_index;
	t_node	*node_a;

	node_a = *head_a;
	max_index = 0;
	while (node_a != NULL)
	{
		if (node_a->index > max_index)
			max_index = node_a->index;
		node_a = node_a->next;
	}
	return (max_index);
}

int	a_is_not_sorted(t_node **head_a)
{
	t_node	*node_a;

	node_a = *head_a;
	while (node_a != NULL && node_a->next != NULL)
	{
		if (node_a->value > node_a->next->value)
			return (1);
		else
			node_a = node_a->next;
	}
	return (0);
}

void	free_a_and_b(t_node	*head_a, t_node	*head_b)
{
	t_node	*temp;

	while (head_a != NULL)
	{
		temp = head_a;
		head_a = head_a->next;
		free(temp);
	}
	while (head_b != NULL)
	{
		temp = head_b;
		head_b = head_b->next;
		free(temp);
	}
}
