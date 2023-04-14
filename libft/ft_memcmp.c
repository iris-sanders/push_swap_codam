/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 15:38:01 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 14:24:39 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((index < n)
		&& (((unsigned char *)s1)[index] == ((unsigned char *)s2)[index]))
	{
		index++;
	}
	while ((index < n)
		&& (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index]))
	{
		return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s1[] = "hi";
// 	const char	s2[] = "hi";

// 	printf("%d,\n", ft_memcmp(s1, s2, 5));
// 	printf("%d\n", memcmp(s1, s2, 5));
// }

// Compares byte string s1 against byte string s2
// both strings are assumed to be n bytes long
// return 0 if both strings are identical
// otherwise return the difference between the first two differing bytes