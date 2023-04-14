/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 17:21:24 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 14:27:14 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	index;

	index = 0;
	while (index < len)
	{
		((unsigned char *)b)[index] = ((unsigned char)c);
		index++;
	}
	return (b);
}

/*int	main(void)
{
	char	b[] = "hallo";

	ft_memset(b, '$', 3);
	printf("%s", b);
}*/

// writes len bytes of value c to the string b
