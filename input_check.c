/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/18 13:10:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/19 18:09:46 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (input_is_number(argv[i]))
			i++;
		else
			ft_error("ERROR! invalid input2\n");
	}
	return (1);
}

int	input_is_number(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' || argv[i] == '-')
		&& (argv[i] != '\0'))
		i++;
	while (ft_isdigit(argv[i]) && argv[i] != '\0')
		i++;
	if (!ft_isdigit(argv[i]) && argv[i] != '\0')
		ft_error("ERROR: not an integer\n");
	return (1);
}

int	duplicate_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc) //i kleiner dan aantal argc)
	{
		j = i + 1; //vergelijken met 1 verder
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_error("ERROR: duplicate found\n");
			j++;
		}
		i++;
	}
	return (1);
}

int	max_min_check(int argc, char **argv)
{
	int	max;
	int min;
	int	i;
	int	number;

	i = 1;
	max = 2147483647;
	min = -2147483648;
	while (i < argc)
	{
		number = atoi_min_max(argv[i]);
		if (number == max)
			ft_error("ERROR: bigger than max integer");
		if (number == min)
			ft_error("ERROR: smaller than min integer");
		i++;
	}
	return (1);
}
