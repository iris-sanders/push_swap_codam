/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: irissanders <irissanders@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:29:12 by irissanders   #+#    #+#                 */
/*   Updated: 2023/05/28 18:59:33 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
