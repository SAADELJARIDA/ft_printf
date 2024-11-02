/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:23:46 by sel-jari          #+#    #+#             */
/*   Updated: 2024/11/02 14:40:18 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf_c(char c);
int	ft_printf_s(char *s);
int	ft_printf_id(int n);
int	ft_printf_u(unsigned int n);
int	ft_printf_x(unsigned int n, char c);
int	ft_printf_xl(unsigned long n, char c);
int ft_printf_p(void *p);
#endif
