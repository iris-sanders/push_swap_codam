/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:29:12 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 14:23:50 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	printf("%d", ft_isdigit('1'));
}*/

// Tests for a digit character