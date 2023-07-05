/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 22:21:36 by irissanders   #+#    #+#                 */
/*   Updated: 2023/05/28 19:00:11 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter++;
	if (n < 0)
	{
		counter++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc (number_count(n) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = number_count(n) - 1;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
