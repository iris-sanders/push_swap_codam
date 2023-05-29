/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 19:07:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/29 19:01:20 by isanders      ########   odam.nl         */
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

// void	f()
// {
// 	system("leaks push_swap");
// }

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	char	**split_argv;
	
	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		split_argv = ft_split(argv[1], ' ');
		if (split_argv == NULL)
			ft_error();
		if (is_correct_input(split_argv) != 0)
			ft_error();
		head_b = NULL;
		head_a = create_list_a(split_argv);
		ft_free(split_argv);
	}
	else
	{
		if (is_correct_input(argv +1) != 0)
			ft_error();
		head_b = NULL;
		head_a = create_list_a(argv +1);
	}
	// ft_printf("original head a\n");
	// print_list(head_a);
	// ft_printf("\n");
	// ft_printf("original head b\n");
	// print_list(head_b);
	index_presort(&head_a);
	sort(&head_a, &head_b);
	free_a_and_b(head_a, head_b);
	// ft_printf("sorted list a\n");
	// print_list(head_a);
	// ft_printf("\n");
	// ft_printf("check if b is empty\n");
	// print_list(head_b);
	// atexit(f);
}

//fix min max ints atoi?? 
