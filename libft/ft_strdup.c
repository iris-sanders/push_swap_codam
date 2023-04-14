/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 09:52:46 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:17:40 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		length;

	length = ft_strlen(s1) + 1;
	s2 = ft_calloc(length, sizeof(char));
	if (s2 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s2, s1, length);
	return (s2);
}

// int	main(void)
// {
// 	char	str[] = "hallo";

// 	printf("%s\n", ft_strdup(str));
// 	printf("%s\n", strdup(str));
// }

// Allocates sufficient memory for a copy of the string s1, does the copy,
// and returns a pointer to it.