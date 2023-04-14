/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 19:39:09 by isanders      #+#    #+#                 */
/*   Updated: 2023/04/12 16:56:00 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "hallo";

	ft_bzero(s, 3);
	printf("%s", s);
}*/

// als index kleiner is dan n
// index opvullen met \0