/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 13:03:03 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:44:24 by isanders      ########   odam.nl         */
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
	{
		return (NULL);
	}
	index = 0;
	while (s[index] != '\0')
	{
		s2[index] = f(index, s[index]);
		index++;
	}
	return (s2);
}

// int	main(void)
// {
// 	char s1[] = "hallo"
// }

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.