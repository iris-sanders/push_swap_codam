/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 13:35:13 by isanders      #+#    #+#                 */
/*   Updated: 2023/03/28 15:04:43 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int n)
{
	int	length;

	length = 0;
	while (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		length += ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n >= 0 && n <= 9)
	{
		length += ft_putchar(n + '0');
	}
	return (length);
}

int	ft_putunbr(unsigned long long n, unsigned int base, int uporlow)
{
	int	length;

	length = 0;
	if (n >= base)
	{
		length += ft_putunbr(n / base, base, uporlow);
		n = n % base;
	}
	if (n >= 0 && n <= 9)
	{
		length += ft_putchar(n + '0');
	}
	if (n >= 10 && n <= base)
	{
		if (uporlow == 1)
			length += ft_putchar(n + 87);
		else if (uporlow == 2)
			length += ft_putchar(n + 55);
	}
	return (length);
}

int	ft_putptr(void *n)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (n == NULL)
	{
		length += ft_putchar('0');
		return (length);
	}
	length += ft_putunbr((unsigned long long)n, 16, 1);
	return (length);
}
