/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 20:24:06 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 15:08:53 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (!(c >= 97 && c <= 122))
	{
		return (c);
	}
	c = c - 32;
	return (c);
}

/*int	main(void)
{
	printf("%c", ft_toupper('a'));
}*/

// converts a lower-case letter to the 
// corresponding upper-case letter.
