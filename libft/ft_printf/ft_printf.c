/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/06 13:01:08 by isanders      #+#    #+#                 */
/*   Updated: 2023/07/05 18:14:50 by lmuzio        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	string_conversion(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int), 10, 0));
	else if (c == 'x')
		return (ft_putunbr(va_arg(args, unsigned int), 16, 1));
	else if (c == 'X')
		return (ft_putunbr(va_arg(args, unsigned int), 16, 2));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		index;
	int		length;

	length = 0;
	index = 0;
	va_start(args, s);
	while (s[index] != '\0')
	{
		if (s[index] == '%' && s[index +1] != '\0')
		{
			index++;
			length += string_conversion(s[index], args);
		}
		else
			length += ft_putchar(s[index]);
		index++;
	}
	va_end(args);
	return (length);
}

// int	main(void)
// {	
// 	int	num = 42;
// 	int	*ptr = &num;

// 	printf("character original: %c\n", 'a');
// 	ft_printf("character self: %c\n\n", 'a');

// 	printf("string original: %s\n", "hallo");
// 	ft_printf("string self: %s\n\n", "hallo");

// 	printf("pointer original: %p\n", (void *)ptr);
// 	ft_printf("pointer self: %p\n\n", (void *)ptr);

// 	printf("integer original: %i\n", -2147483647);
// 	ft_printf("integer self: %i\n\n", -2147483647);

// 	printf("decimal original: %d\n", 2);
// 	ft_printf("decimal self: %d\n\n", 2);

// 	printf("unsigned decimal original: %u\n", 2);
// 	ft_printf("unsigned decimal self: %u\n\n", 2);

// 	printf("lowcase hexadecimal original: %x\n", 15);
// 	ft_printf("lowcase hexadecimal self: %x\n\n", 15);

// 	printf("upcase hexadecimal original: %X\n", 15);
// 	ft_printf("upcase hexadecimal self: %X\n\n", 15);

// 	printf("percentage original: %%\n");
// 	ft_printf("percentage self: %%\n\n");
// }