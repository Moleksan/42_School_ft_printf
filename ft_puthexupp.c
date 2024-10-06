/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:43:37 by moleksan          #+#    #+#             */
/*   Updated: 2024/01/29 20:36:34 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupp(unsigned long long n)
{
	int	result;

	result = 0;
	if (n >= 16)
		result += ft_puthexupp(n / 16);
	result += ft_putchar(HU[n % 16]);
	return (result);
}
