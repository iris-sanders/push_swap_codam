/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 17:13:49 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/29 19:13:46 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_presort(t_node **head_a)
{
	t_node	*node_a;
	t_node	*check_next_node;

	node_a = *head_a;
	check_next_node = *head_a;
	while (node_a != NULL)
	{
		while (check_next_node != NULL)
		{
			if (node_a->value < check_next_node->value)
				check_next_node->index++;
			check_next_node = check_next_node->next;
		}
		node_a = node_a->next;
		check_next_node = *head_a;
	}
}

void	sort(t_node **head_a, t_node **head_b)
{
	int	number_of_nodes;

	number_of_nodes = node_count(head_a);
	if (number_of_nodes == 2 || number_of_nodes == 3)
		three_sort(head_a);
	if (number_of_nodes == 4 || number_of_nodes == 5)
		five_sort(head_a, head_b);
	if (number_of_nodes > 5)
		radix_sort(head_a, head_b);
}

void	three_sort(t_node **head_a)
{
	t_node	*node_a;
	int		max_index;

	max_index = find_max_index(head_a);
	while (a_is_not_sorted(head_a) == 1)
	{
		node_a = *head_a;
		if (node_a->index == max_index)
			rotate_a(head_a);
		else if (node_a->next != NULL && node_a->next->index == max_index)
			reverse_rotate_a(head_a);
		if (node_a->next != NULL && node_a->index > node_a->next->index)
			swap_a(head_a);
	}
}

void	five_sort(t_node **head_a, t_node **head_b)
{
	t_node	*node_a;
	int		nodes_to_check;

	nodes_to_check = node_count(head_a);
	while (a_is_not_sorted(head_a) == 1)
	{
		while (nodes_to_check > 0)
		{
			node_a = *head_a;
			if (node_a->index == 0 || node_a->index == 1)
				push_b(head_a, head_b);
			else
				rotate_a(head_a);
			nodes_to_check--;
		}
		three_sort(head_a);
		push_a(head_b, head_a);
		push_a(head_b, head_a);
		if (node_a != NULL && node_a->next != NULL && node_a->index > node_a->next->index)
			swap_a(head_a);
	}
}

void	radix_sort(t_node **head_a, t_node **head_b)
{
	int	bit;
	int	nodes_to_check;

	bit = 1;
	while (a_is_not_sorted(head_a) == 1 || *head_b != NULL)
	{
		nodes_to_check = node_count(head_a);
		while (nodes_to_check > 0)
		{
			if ((*head_a)->index & bit)
			{
				rotate_a(head_a);
			}
			else
				push_b(head_a, head_b);
			nodes_to_check--;
		}
		bit = bit << 1;
		while (*head_b != NULL)
			push_a(head_b, head_a);
	}
}
