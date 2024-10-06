/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:56:50 by moleksan          #+#    #+#             */
/*   Updated: 2024/01/29 20:36:53 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	result;

	result = 0;
	if (n == 4294967295)
	{
		result += ft_putchar('4');
		n = 294967295;
	}
	if (n < 10)
		result += ft_putchar('0' + n);
	if (n >= 10)
	{
		result += ft_putnbr(n / 10);
		result += ft_putnbr(n % 10);
	}
	return (result);
}
