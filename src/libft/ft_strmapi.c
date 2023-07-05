/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 13:03:03 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:07:33 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		length_s;
	int		index;

	length_s = ft_strlen(s);
	s2 = ft_calloc(length_s + 1, sizeof(char));
	if (s2 == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		s2[index] = f(index, s[index]);
		index++;
	}
	return (s2);
}
