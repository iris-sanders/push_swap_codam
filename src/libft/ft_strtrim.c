/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:15:10 by isanders      #+#    #+#                 */
/*   Updated: 2023/05/28 19:08:56 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	index;
	int	index2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	index = 0;
	while (s1[index] != '\0' && ft_strchr(set, s1[index]))
		index++;
	index2 = ft_strlen(s1);
	while (index2 > 0 && ft_strrchr(set, s1[index2]))
		index2--;
	return (ft_substr(s1, index, index2 - index + 1));
}
