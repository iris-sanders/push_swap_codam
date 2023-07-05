/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 13:24:29 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:10:45 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dest_length >= dstsize)
		return (dstsize + src_length);
	i = 0;
	while (src[i] != '\0' && dest_length < (dstsize -1))
	{
		dst[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dst[dest_length] = '\0';
	return (dest_length - i + src_length);
}
