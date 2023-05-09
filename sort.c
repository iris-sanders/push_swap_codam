/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 17:13:49 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/09 16:15:42 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_node **head)
{
	int		count;
	t_node	*last;
	
	count = 0;
	if (*head == NULL || (*head)->next == NULL)
		exit(EXIT_FAILURE);
	last = *head;
	while (last != NULL)
	{
		last = last->next;
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