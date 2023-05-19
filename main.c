/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/19 14:48:11 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_correct_input(int argc, char **argv)
{
	int	i;
	int	number;

	i = 1;
	if ((check_valid_input(argv) == 1)
		&& (duplicate_check(argc, argv) == 1))
	{
		while (argv[i] != NULL)
		{
			number = atoi_min_max(argv[i]);
			if (number == -1)
				ft_error();
			else
				i++;
		}
	}
	else
		ft_error();
	return (0);
}

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;

	if (argc < 2)
		ft_error();
	if (is_correct_input(argc, argv) != 0)
		ft_error();
	head_b = NULL;
	head_a = create_list_a(argv);
	ft_printf("original head a\n");
	print_list(head_a);
	ft_printf("\n");
	ft_printf("original head b\n");
	print_list(head_b);
	small_sort(&head_a, &head_b);
	// index_presort(&head_a);
	// sort(&head_a, &head_b);
	ft_printf("sorted list a\n");
	print_list(head_a);
	ft_printf("\n");
	ft_printf("check if b is empty\n");
	print_list(head_b);
}
