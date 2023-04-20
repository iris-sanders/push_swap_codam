/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/20 14:27:20 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int number;
	
	(void)argc;
	if ((check_valid_input(argv) == 1)
		&& (duplicate_check(argc, argv) == 1))
		{
			number = atoi_min_max(argv[1]);
			if (number == -1)
				ft_error("ERROR: min/max overflow\n");
			else
				print_list(argv);
		}
	else
		ft_error("ERROR: invalid input\n");
	return (0);
}
