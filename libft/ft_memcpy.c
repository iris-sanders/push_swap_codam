/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:55 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 14:25:34 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dst == src)
	{
		return (dst);
	}
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dst);
}

// int main(void)
// {
// 	char	dest[] = "goodbye";
// 	char    source[] = "hello";

// 	memcpy(NULL, NULL, 3);
// 	// printf("%s", dest);
// 	printf("%s", ft_memcpy(NULL, NULL, 3));
// }

// Copies n bytes from memory area src to memory area dst