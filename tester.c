/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/07 16:06:18 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/14 13:40:36 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int print_list(char **argv)
{
	t_node *link;
	t_node *head;
	// int	number;
	
	head = create_list_a(argv);
	link = head;
	// while (link != NULL)
	// {
	// 	number = link->value;
	// 	link = link->next;
	// 	number = ft_printf("%i", number);
	// }
	while (link != NULL)
	{
		ft_printf("%i\n", link->value);
		link = link->next;
	}
	return (0);
}