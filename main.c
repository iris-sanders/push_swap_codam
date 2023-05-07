/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/07 13:51:04 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	int number;
	int	i;
	
	i = 1;
	(void)argc;
	if ((check_valid_input(argv) == 1)
		&& (duplicate_check(argc, argv) == 1))
		{
			while (argv[i] != NULL)
			{
				number = atoi_min_max(argv[i]);
				if (number == -1)
					ft_error("ERROR: min/max overflow\n");
				else
					i++;
			}
			head_a = create_list_a(argv);
			head_b = NULL;
			ft_printf("original head a\n");
			print_list(head_a);
			ft_printf("\n");
			ft_printf("original head b\n");
			print_list(head_b);
			ft_printf("\n");
			push_b(&head_a, &head_b);
			push_b(&head_a, &head_b);
			ft_printf("updated head a\n");
			print_list(head_a);
			ft_printf("updated head b\n");
			print_list(head_b);
			ft_printf("\n");
			ft_printf("reverse rotate a:\n");
			swap_a_and_b(&head_a, &head_b);
			print_list(head_a);
			ft_printf("\n");
			ft_printf("reverse rotate b: \n");
			print_list(head_b);
		}
	else
		ft_error("ERROR: invalid input\n");
	return (0);
}
