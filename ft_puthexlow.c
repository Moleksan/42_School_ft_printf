/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:36:23 by moleksan          #+#    #+#             */
/*   Updated: 2024/01/29 20:36:17 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned long long n)
{
	int	result;

	result = 0;
	if (n > 15)
		result += ft_puthexlow(n / 16);
	result += ft_putchar(HL[n % 16]);
	return (result);
}
