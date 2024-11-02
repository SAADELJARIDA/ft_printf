/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:42:08 by sel-jari          #+#    #+#             */
/*   Updated: 2024/11/02 15:04:42 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_conversion(const char c , va_list arg)
{
	int len;

	len = 0;
	if (c == 'i' || c == 'd')
		len = ft_printf_id(va_arg())	
	else if (c == 'u')
		ft_printf_u(c)
	else if (c == 'c' || c == '%')
		len = ft_printf_c(c)
	else if (c == 's')
		len = ft_printf_s(c)
	else if (c == 'x')
		len = ft_printf_x(c)
	else if (c == 'X')
		len = ft_printf_xx(c)
	else
		len = ft_printf_p()
	return (len)
}
