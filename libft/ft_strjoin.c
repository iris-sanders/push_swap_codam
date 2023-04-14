/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 16:16:20 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:17:10 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*s3;

	length = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(length + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s3, s1, length + 1);
	ft_strlcat(s3, s2, length + 1);
	return (s3);
}

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	str2[] = "goodbye";

// 	printf("%s\n", ft_strjoin(str, str2));
// }

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.