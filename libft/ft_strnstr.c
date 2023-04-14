/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 15:40:07 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:48:19 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	int		ndl_length;

	index = 0;
	ndl_length = ft_strlen(needle);
	if (needle[0] == '\0')
	{
		return ((char *)&haystack[0]);
	}
	while ((haystack[index] != '\0' && index < len
			&& (ndl_length + index <= len)))
	{
		if (!(ft_strncmp(&haystack[index], needle, ndl_length)))
		{
			return ((char *)&haystack[index]);
		}
		index++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	haystack[] = "Goodbye";
// 	const char	needle[] = "bye";

// 	printf("%s\n", ft_strnstr(haystack, needle, 10));
// 	printf("%s\n", strnstr(haystack, needle, 10));
// }

// locates the first occurrence of the null-terminated 
// string needle in the null-terminated string haystack
// If needle is an empty string, haystack is returned; 
// if needle occurs nowhere in haystack, NULL is returned; 
// otherwise a pointer to the first character of the first 
// occurrence of needle is returned.