/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_functions.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/24 15:38:26 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/02 18:05:48 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head)
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
void	push(t_node **head_a, t_node **head_b)
{
	t_node	*temp;
	
	if ((*head_a) == NULL)
		exit(EXIT_FAILURE);
	//sla de hele 2e node van head_a op in temp
	temp = (*head_a)->next;
	//de eerste node(next) van stack_a wijst naar de eerste node van stack_b
	(*head_a)->next = (*head_b);
	//de eerste node van stack b is nu de eerste node van stack a
	(*head_b) = (*head_a);
	//head a is temp (wat voorheen de 2e node was)
	(*head_a) = temp;
}