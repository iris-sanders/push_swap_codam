/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 13:24:29 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 14:59:48 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	index;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dest_length >= dstsize)
	{
		return (dstsize + src_length);
	}
	index = 0;
	while (src[index] != '\0' && dest_length < (dstsize -1))
	{
		dst[dest_length] = src[index];
		dest_length++;
		index++;
	}
	dst[dest_length] = '\0';
	{
		return (dest_length - index + src_length);
	}
}

/*int	main(void)
{
	char    dest[] = "goodbye";
	char    src[] = "hello";

	ft_strlcat(dest, src, 6);
	printf("%s\n", dest);

	printf("%lu\n", strlcat(dest, src, 6));
}*/

//copy and concatenate strings.