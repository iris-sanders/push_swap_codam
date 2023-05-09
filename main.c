/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/09 16:09:45 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	
	if (argc < 2)
		return (0);
	if (is_correct_input(argc, argv) != 0)
		ft_error("ERROR: input not correct\n");
	head_b = NULL;
	head_a = create_list_a(argv);
	print_index_test(&head_a);
	// ft_printf("original head a\n");
	// print_list(head_a);
	// ft_printf("\n");
	// ft_printf("original head b\n");
	// print_list(head_b);
}
