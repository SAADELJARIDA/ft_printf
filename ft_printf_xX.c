/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:46:54 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/31 22:09:59 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printf_x(unsigned int n, char c)
{
	unsigned int	l;
	char			x[16];
	char			xx[16];
	int				i;

	xx = "0123456789ABCDEF";
	x = "0123456789abcdef";
	i = 0;
	l = n;
	while (n / 16)
	{
		i++;
		n /= 16;
	}
	if (l / 16)
		ft_printf_x(l / 16, c);
	if (c == 'x')
		write(1, &x[l % 16], 1);
	else
		write(1, &xx[l % 16], 1);
	return (++i);
}
