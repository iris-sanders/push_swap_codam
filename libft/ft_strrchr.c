/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 17:19:05 by irissanders   #+#    #+#                 */
/*   Updated: 2022/11/25 15:06:29 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (unsigned char) c)
		{
			return ((char *)s + index);
		}
		index--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const   char s[] = "abcdef";

// 	printf("%s,\n", ft_strrchr(s, 'g'));

// 	printf("%s,\n", strrchr(s, 'g'));
// }

// locates the first occurrence of c (converted to a char) 
// in the string pointed to by s
// return a pointer to the located character, 
// or NULL if the character does not appear in the string.