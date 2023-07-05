/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 15:40:07 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:08:19 by irissanders   ########   odam.nl         */
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
		return ((char *)&haystack[0]);
	while ((haystack[index] != '\0' && index < len
			&& (ndl_length + index <= len)))
	{
		if (!(ft_strncmp(&haystack[index], needle, ndl_length)))
			return ((char *)&haystack[index]);
		index++;
	}
	return (0);
}
