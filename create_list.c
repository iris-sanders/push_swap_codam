/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_list.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/07 16:04:52 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/30 13:52:51 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_new_node(int number)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error();
	new_node->value = number;
	new_node->next = NULL;
	new_node->index = 0;
	return (new_node);
}

t_node	*create_list_a(char **argv)
{
	int		i;
	int		number;
	t_node	*head_a;
	t_node	*new_node;
	t_node	*link;

	i = 0;
	number = 0;
	head_a = NULL;
	while (argv[i] != NULL)
	{
		number = ft_atoi(argv[i]);
		if (i == 0)
			head_a = create_new_node(number);
		else
		{
			new_node = create_new_node(number);
			link = head_a;
			while (link->next != NULL)
				link = link->next;
			link->next = new_node;
		}
		i++;
	}
	return (head_a);
}

void	initialize(int argc, char **argv, t_node **head_a, t_node **head_b)
{
	char	**split_argv;

	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		split_argv = ft_split(argv[1], ' ');
		if (split_argv == NULL)
			ft_error();
		if (is_correct_input(split_argv) != 0)
			ft_error();
		*head_b = NULL;
		*head_a = create_list_a(split_argv);
		ft_free(split_argv);
	}
	else
	{
		if (is_correct_input(argv +1) != 0)
			ft_error();
		*head_b = NULL;
		*head_a = create_list_a(argv +1);
	}
}
