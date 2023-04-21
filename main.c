/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/21 11:46:23 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
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
			print_list(argv);
		}
	else
		ft_error("ERROR: invalid input\n");
	return (0);
}
