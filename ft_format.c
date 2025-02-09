/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:51:42 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/09 19:51:42 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *str, va_list args)
{
	int	bytes;

	bytes = 0;
	if (*str == 'i' || *str == 'd')
		bytes += ft_putnbr(va_arg(args, int));
	else if (*str == 'u')
		bytes += ft_putnbr(va_arg(args, unsigned int));
	else if (*str == 's')
		bytes += ft_putstr(va_arg(args, char *));
	else if (*str == 'c')
		bytes += ft_putchar(va_arg(args, unsigned int));
	else if (*str == '%')
		bytes += ft_putchar('%');
	else if (*str == 'x')
		bytes += ft_puthex(va_arg(args, unsigned long long), 0);
	else if (*str == 'X')
		bytes += ft_puthex(va_arg(args, unsigned long long), 1);
	else if (*str == 'p')
		bytes += ft_putptr(va_arg(args, unsigned long long));
	return (bytes);
}
