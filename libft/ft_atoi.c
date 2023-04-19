/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 12:52:55 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/19 16:24:01 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg_number;
	int	number;

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
	return (number * neg_number);
}

// int	main(void)
// {
// 	char	str[] = "  325";

// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }

// index + 1, getal na +/- moet een getal zijn