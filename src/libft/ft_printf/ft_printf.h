/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/06 13:54:25 by isanders      #+#    #+#                 */
/*   Updated: 2023/01/09 13:48:46 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(long int n);
int			ft_putunbr(unsigned long long n, unsigned int base, int uporlow);
int			ft_putptr(void *n);
int			ft_printf(const char *s, ...);

#endif