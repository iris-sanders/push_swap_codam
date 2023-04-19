/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/19 17:32:31 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	 main(int argc, char **argv)
{
	(void)argc;
	
	ft_printf("%d\n", atoi_min_max("2147483648"));
	if ((check_valid_input(argv) == 1)
		&& (duplicate_check(argc, argv) == 1))
		print_list(argv);
	else
		ft_error("ERROR: invalid input\n");
}



