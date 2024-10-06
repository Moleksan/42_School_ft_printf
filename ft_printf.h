/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:18:06 by moleksan          #+#    #+#             */
/*   Updated: 2024/01/29 20:39:16 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HL "0123456789abcdef"
# define HU "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>//for va_list structures.

int	ft_printf(const char *format, ...);
//For '%c'
int	ft_putchar(char c);
//For '%s'
int	ft_putstr(char *s);
//For '%p'
int	ft_putptr(unsigned long long n);
//For '%d'
int	ft_putnbr(int n);
//For '%i'
int	ft_putnbr(int n);
//For '%u'
int	ft_putunbr(unsigned int n);
//For '%x'
int	ft_puthexlow(unsigned long long n);
//For '%X'
int	ft_puthexupp(unsigned long long n);

#endif