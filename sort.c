/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 17:13:49 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/26 14:40:12 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	print_index_test(t_node **head_a)
{
	t_node	*link;

	link = *head_a;
	while (link != NULL)
	{
		ft_printf("%i", link->index);
		link = link->next;
	}
}

int	a_is_not_sorted(t_node **head_a, t_node **head_b)
{
	t_node	*node_a_a;
	t_node	*node_b;

	node_b = *head_b;
	if (node_b != NULL)
		return (1);
	node_a_a = *head_a;
	while (node_a_a != NULL && node_a_a->next != NULL)
	{
		if (node_a_a->value > node_a_a->next->value)
			return (1);
		else
			node_a_a = node_a_a->next;
	}
	return (0);
}

void	radix_sort(t_node **head_a, t_node **head_b) //doesnt work with 3? 
{
	int	bit;
	int	nodes_to_check;

	bit = 1;
	while (a_is_not_sorted(head_a, head_b) == 1)
	{
		nodes_to_check = node_count(head_a);
		while (nodes_to_check > 0)
		{
			if ((*head_a)->index & bit)
				rotate_a(head_a);
			else
				push_b(head_a, head_b);
			nodes_to_check--;
		}
		bit = bit << 1;
		while (*head_b != NULL)
			push_a(head_b, head_a);
	}
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

int	find_low_index(t_node **head_a)
{
	int		low_index;
	t_node	*node_a;
	
	node_a = *head_a;
	low_index = 2147483647;
	while (node_a != NULL)
	{
		if (node_a->index < low_index)
			low_index = node_a->index;
		node_a = node_a->next;
	}
	return (low_index);
}

void	two_sort(t_node **head_a, t_node **head_b)
{
	t_node	*node_a;

	node_a = *head_a;
	while (a_is_not_sorted(head_a, head_b) == 1)
		swap_a(head_a);
}

void	three_sort(t_node **head_a)
{
	t_node *node_a;
	int		max_index;
		
	node_a = *head_a;
	max_index = find_max_index(&node_a);
	if ((*head_a)->index == max_index)
		rotate_a(head_a);
	else if ((*head_a)->next->index == max_index)
		reverse_rotate_a(head_a);
	if (!(*head_a)->next)
		return ;
	if ((*head_a)->index > (*head_a)->next->index)
		swap_a(head_a);
}
	
	// if (node_a->index < node_a->next->index && node_a->next->index > node_a->next->next->index)
	// 	swap_a(head_a);
	// 	rotate_a(head_a);
	// if (node_a->index > node_a->next->index && node_a->next->index < node_a->next->next->index)
	// 	swap_a(head_a);
	// if (node_a->index < node_a->next->index && node_a->next->index > node_a->next->next->index)
	// 	reverse_rotate_a(head_a);
	// if (node_a->index > node_a->next->index && node_a->next->index < node_a->next->next->index)
	// 	rotate_a(head_a);
	// if (node_a->index > node_a->next->index && node_a->next->index > node_a->next->next->index)
	// 	swap_a(head_a);
	// 	reverse_rotate_a(head_a);
	
void	four_sort(t_node **head_a, t_node **head_b) //use *head
{
	t_node	*node_a;
	int		low_index;
	int		nodes_to_check;
	
	node_a = *head_a;
	low_index = find_low_index(head_a);
	nodes_to_check = node_count(head_a);
	while (nodes_to_check > 0)
	{
		if (node_a->index == low_index)
			push_b(head_a, head_b);
		nodes_to_check--;
	}
	three_sort(head_a);
	push_a(head_b, head_a);
}

void	five_sort(t_node **head_a, t_node **head_b)
{
	// t_node	*node_a;
	int		nodes_to_check;

	nodes_to_check = node_count(head_a);
	ft_printf("HALLO");
		// node_a = *head_a;
	while (nodes_to_check > 0)
	{
		if ((*head_a)->index == 0 || (*head_a)->index == 1)
			push_b(head_a, head_b);
		else
			rotate_a(head_a);
		nodes_to_check--;
	}
	three_sort(head_a);
	push_a(head_b, head_a);
	push_a(head_b, head_a);
	if ((*head_a)->index > (*head_a)->next->index)
		swap_a(head_a);
}

void	sort(t_node **head_a, t_node **head_b)
{
	int	number_of_nodes;

	number_of_nodes = node_count(head_a);
	if (number_of_nodes == 2)
		two_sort(head_a, head_b);
	if (number_of_nodes == 3)
		three_sort(head_a);
	if (number_of_nodes == 4)
		four_sort(head_a, head_b);
	if (number_of_nodes == 5)
		five_sort(head_a, head_b);
	// while (a_is_not_sorted(head_a, head_b) == 1)
	// {
	// 	// if (number_of_nodes > 5)
	// 		radix_sort(head_a, head_b);
	// }
}
