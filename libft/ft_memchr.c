/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 13:39:55 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 14:24:25 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((char *)s)[index] == (char)c)
		{
			return ((char *)s + index);
		}
		index++;
	}
	return (NULL);
}

/*int main(void)
{
	const char s[] = "hallo";

	printf("%s\n", ft_memchr(s, 'e', 3));
	printf("%s\n", memchr(s, 'e', 3));
q
}*/

// Locates the first occurence of c in string s
// als de index kleiner is dan n
// als de index == c --> return a pointer to the byte located
