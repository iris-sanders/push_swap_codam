/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 12:29:28 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:49:43 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (s == NULL)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len >= ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	s2 = malloc (len + 1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s2, s + start, len +1);
	return (s2);
}

// int	main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";

// 	printf("%s\n", ft_substr(str, 1, 3));
// }

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.