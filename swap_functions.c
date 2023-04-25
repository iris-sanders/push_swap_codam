/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_functions.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 15:38:26 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/25 14:32:02 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **head)
{
	t_node	*first;
	t_node	*second;
	
	//check if list is empty or has only 1 node
	if ((*head) == NULL || (*head)->next == NULL)
		exit(EXIT_FAILURE);
	//save pointers to the first two nodes
	first = (*head);
	second = (*head)->next;
	//swap the addresses in next to swap the nodes
	first->next = second->next;
	second->next = first;
	//make head point to the first node again
	(*head) = second;
}