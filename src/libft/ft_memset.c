/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 17:21:24 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:10:26 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
