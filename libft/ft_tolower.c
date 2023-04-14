/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 20:27:29 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 15:08:36 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

/*int	main(void)
{
	printf("%c", ft_tolower('A'));
}*/

// converts an upper-case letter to the 
// corresponding lower-case letter.
