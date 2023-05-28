/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 09:52:46 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:05:57 by irissanders   ########   odam.nl         */
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
		return (NULL);
	ft_strlcpy(s2, s1, length);
	return (s2);
}
