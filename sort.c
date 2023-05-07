/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 17:13:49 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 17:28:11 by isanders      ########   odam.nl         */
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