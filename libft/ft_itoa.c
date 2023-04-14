/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 22:21:36 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 15:51:23 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
	{
		counter++;
	}
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
	int		index;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc (number_count(n) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	index = number_count(n) - 1;
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[index] = n % 10 + '0';
		n = n / 10;
		index--;
	}
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = -25450;
// 	printf("%s\n", ft_itoa(n));
// }

// number_count
// n == 0 -> counter++ -> 0 getal is ook character 
// die je wil tellen
// eerste counter++ -> min getal is ook character
// n * -1 -> negatief getal wordt positief zodat het 
// de while loop in gaat.
// index = character_count(n) - 1; --> -1 voor \0 character

// itoa
// if n==0 ptr[0] ='0' --> if first num is 0 --> 
// first index of ptr is '0'
// if n < 0 --> is negatief getal, daarom eerste index '-', 
//daarna n*-1 zodat getal positief wordt
// .    daardoor kan het getal in volgende while loop
// return (ft_strdup("-2147483648")); --> als dat het 
// getal is maak er een string van (hardcoded)
// index -1 --> 3 woorden maar index begint bij 0