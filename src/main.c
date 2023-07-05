/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/30 13:51:59 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_correct_input(char **argv)
{
	int	i;
	int	number;

	i = 0;
	if ((check_valid_input(argv) == 1)
		&& (duplicate_check(argv) == 1))
	{
		while (argv[i] != NULL)
		{
			number = atoi_min_max(argv[i]);
			if (number == 0 && argv[i][0] != '0')
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

	initialize(argc, argv, &head_a, &head_b);
	index_presort(&head_a);
	sort(&head_a, &head_b);
	free_a_and_b(head_a, head_b);
}

//fix min max ints atoi?? 
