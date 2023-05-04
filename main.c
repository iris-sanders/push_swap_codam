/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/04 16:33:57 by isanders      ########   odam.nl         */
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
			ft_printf("original list\n");
			print_list(head_a);
			ft_printf("updated list\n");
			rotate(&head_a);
			print_list(head_a);
		}
	else
		ft_error("ERROR: invalid input\n");
	return (0);
}
