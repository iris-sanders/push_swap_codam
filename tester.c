/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/07 16:06:18 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/25 14:26:54 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_list(t_node *head_a)
{
	t_node	*link;
	
	link = head_a;
	while (link != NULL)
	{
		ft_printf("%i\n", link->value);
		link = link->next;
	}
	return (0);
}
