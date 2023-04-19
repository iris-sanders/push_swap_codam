/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 18:08:58 by irissanders   #+#    #+#                 */
/*   Updated: 2023/04/19 14:28:17 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((((unsigned char *)s1)[i] != '\0')
		|| (((unsigned char *)s2)[i] != '\0')) && i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		{
			i++;
		}
		else if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
		{
			return (1);
		}
		else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		{
			return (-1);
		}
	}
	return (0);
}

// int main(void)
// {
// 	const   char s1[] = "abcdef";
// 	const   char s2[] = "abc\xfdxx";

// 	printf("%d,\n", ft_strncmp(s1, s2, 5));
// 	  printf("%d,\n", strncmp(s1, s2, 5));
// }