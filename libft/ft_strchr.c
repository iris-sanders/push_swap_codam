/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 14:03:24 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 14:56:52 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != (char)c)
	{
		if (s[index] == '\0')
		{
			return (NULL);
		}
		index++;
	}
	return ((char *)s + index);
}
	// int	index;
	// int	length;

	// index = 0;
	// while (s[index] != '\0')
	// {
	// 	if (s[index] == (char)c)
	// 	{
	// 		return ((char *)s + index);
	// 	}
	// 	index++;
	// }
	// length = 0;
	// while (s[length] != '\0')
	// {
	// 	length++;
	// }
	// if ((char)c == '\0')
	// {
	// 	return ((char *)s + length);
	// }
	// return (NULL);

// int main(void)
// {
// 	const char    s[] = "abcdef";

// 	printf("%s\n", ft_strchr(s, 'e'));

// 	printf("%s\n", strchr(s, 'e'));
// }

// Locates the first occurrence of c in the string pointed to by s