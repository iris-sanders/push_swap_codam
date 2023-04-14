/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:48:14 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 16:49:16 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	index = 0;
	if (dst == src)
	{
		return (dst);
	}
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		return (dst);
	}
	while (index < len)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}

/*int main(void)
{
	char    dest[] = "goodbye";
	char    source[] = "hello";

	ft_memmove(dest, source, 3);
	printf("%s", dest);
}*/

// copies len bytes from string src to string dst