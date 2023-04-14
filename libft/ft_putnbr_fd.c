/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 17:10:06 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:48:57 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	while (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd (nbr / 10, fd);
	}
	nbr = nbr % 10;
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
	}
}

// Outputs the integer ’n’ to the given file descriptor
// long int because of big numbers
// nbr < 0 --> negative number, add '-'