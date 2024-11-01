/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:23:12 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/31 21:23:34 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_printf_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_s(char *s)
{
	int	i;

	if (!s)
		write(1, "(null)", 6);
	i = 0;
	while (s[i])
		write(1, s + i++, 1);
	return (i);
}
