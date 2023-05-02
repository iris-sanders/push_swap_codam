/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/02 18:09:02 by isanders      ########   odam.nl         */
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
			ft_printf("original list\n");
			head_a = create_list_a(argv);
			head_b = NULL;
			// print_list(head_a);
			print_list(head_b);
			ft_printf("updated list\n");
			push(&head_a, &head_b);
			// print_list(head_a);
			print_list(head_b);
			
		}
	else
		ft_error("ERROR: invalid input\n");
	return (0);
}
