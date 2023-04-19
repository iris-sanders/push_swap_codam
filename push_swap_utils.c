/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 14:01:31 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/19 17:31:33 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

static int	min_max_int(long long number)
{
	int	max;
	int min;

	max = 2147483647;
	min = -2147483648;
	if (number > max)
		return (max);
	else if (number < min)
		return (min);
	return (1);
	
}
int	atoi_min_max(const char *str)
{
	int	i;
	int	neg_number;
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
	if (min_max_int(number * neg_number) != 1)
		return (min_max_int(number * neg_number));
	return (number * neg_number);
}
