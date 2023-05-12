/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/18 13:10:40 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/12 15:44:31 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Loops over the array of strings and checks for number
// "hallo" "hoi" "doei"
int	check_valid_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (input_is_number(argv[i]))
			i++;
		else
			ft_error();
	}
	return (1);
}

//Checks within 1 string if there is a number
//"1 2 3" correct
//"1 a 3" incorrect
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
		ft_error();
	return (1);
}

//change arguments into integers
//easier to check duplicates with + - etc.
//checks if the next argument is a duplicate with i & j
int	duplicate_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				ft_error();
			j++;
		}
		i++;
	}
	return (1);
}

//if number is bigger/smaller than min/max int return 1
//used for atoi_min_max
static int	min_max_int(long long number)
{
	int	max;
	int	min;

	max = 2147483647;
	min = -2147483648;
	if (number > max)
		return (1);
	else if (number < min)
		return (1);
	return (0);
}

//atoi but returns -1 if max/min int is reached
int	atoi_min_max(char *str)
{
	int			i;
	int			neg_number;
	long long	number;

	i = 0;
	neg_number = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| (str[i] == 32))
			i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i +1] >= '0' && str[i +1] <= '9'))
	{
		if (str[i] == '-')
			neg_number = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (min_max_int(number * neg_number) == 1)
		return (-1);
	return (number * neg_number);
}
