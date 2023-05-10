/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 17:13:49 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/09 22:22:58 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_node **head)
{
	int		count;
	t_node	*current_node;
	
	count = 0;
	current_node = *head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	// ft_printf("%i", count);
	return (count);
}

void	index_presort(t_node **head_a)
{
	int		i; //current node
	int		amount_of_nodes;
	t_node	*current_node;
	t_node	*check_next_node;

	i = 0;
	amount_of_nodes = count_nodes(head_a);
	current_node = *head_a;
	check_next_node = *head_a;
	while (i < amount_of_nodes)
	{
		while (check_next_node != NULL)
		{
			if (current_node->value < check_next_node->value)
			{
				check_next_node->index++;
			}
			check_next_node = check_next_node->next;
		}
		current_node = current_node->next;
		i++;
		check_next_node = *head_a;
	}
}

void	print_index_test(t_node **head_a)
{
	t_node	*link;

	link = *head_a;
	index_presort(&link);

	while (link != NULL)
	{
		ft_printf("%i", link->index);
		link = link->next;
	}
}

int	a_is_not_sorted(t_node **head_a, t_node **head_b)
{
	t_node	*current_node_a;
	t_node	*node_b;

	node_b = *head_b;
	if (node_b != NULL)
		return (1);
	current_node_a = *head_a;
	while (current_node_a != NULL)
	{
		if (current_node_a->value > current_node_a->next->value)
			return (1);
		else
			current_node_a = current_node_a->next;
	}
	return (0);
}


void	sort(t_node **head_a, t_node **head_b)
{
	int	bit;
	int	nodes_to_check; //nodes

	bit = 1;
	while (a_is_not_sorted(head_a, head_b) == 1)
	{
		nodes_to_check = count_nodes(head_a);
		while (nodes_to_check > 0)
		{
			if ((*head_a)->index & bit) //if it is true
				rotate_a(head_a);
			else						//if it is false
				push_b(head_a, head_b);
			nodes_to_check--;
		}
		bit = bit << 1;
		while (*head_b != NULL)
			push_a(head_b, head_a);
	}
}