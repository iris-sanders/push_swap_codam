/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_list.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/07 16:04:52 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/20 13:55:33 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_new_node(int number)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->value = number;
	new_node->next = NULL;
	return (new_node);
}

t_node	*create_list_a(char **argv)
{
	int		i;
	int		number;
	t_node	*head;
	t_node	*new_node;
	t_node	*link;

	i = 1;
	number = 0;
	head = NULL;
	while (argv[i] != NULL)
	{
		number = ft_atoi(argv[i]);
		if (i == 1)
			head = create_new_node(number);
		else
		{
			new_node = create_new_node(number);
			link = head;
			while (link->next != NULL)
				link = link->next;
			link->next = new_node;
		}
		i++;
	}
	return (head);
}
