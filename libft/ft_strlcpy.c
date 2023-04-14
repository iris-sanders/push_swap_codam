/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 14:48:24 by irissanders   #+#    #+#                 */
/*   Updated: 2022/10/31 15:59:58 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// check with someone
// man says If the src and dst strings overlap, 
//the behavior is undefined. when does this happen? 
// return src index because..? 
// dstsize -1 space for '\0'?

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	index2;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	if (dstsize == 0)
	{
		return (index);
	}
	index2 = 0;
	while (src[index2] != '\0' && index2 < (dstsize -1))
	{
		dst[index2] = src[index2];
		index2++;
	}
	dst[index2] = '\0';
	return (index);
}

/*int main(void)
{
	char    dest[] = "goodbye";
	char    source[] = "hello";

	ft_strlcpy(dest, source, 3);
	printf("%s", dest);
}*/