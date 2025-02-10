/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:57:14 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/10 20:40:00 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formater(const char *c, va_list args)
{
	int	bytes;

	bytes = 0;
	if (*c == 'd' || *c == 'i')
		bytes += ft_putnbr(va_arg(args, int), 'i');
	else if (*c == 'u')
		bytes += ft_putnbr(va_arg(args, unsigned int), 'u');
	else if (*c == 'c')
		bytes += ft_putchar((unsigned int)va_arg(args, unsigned int));
	else if (*c == '%')
		bytes += ft_putchar('%');
	else if (*c == 's')
		bytes += ft_putstr(va_arg(args, char *));
	else if (*c == 'x')
		bytes += ft_puthex((unsigned long long)va_arg(args, unsigned int), 0);
	else if (*c == 'X')
		bytes += ft_puthex((unsigned long long)va_arg(args, unsigned int), 1);
	else if (*c == 'p')
		bytes += ft_putptr((unsigned long long)va_arg(args, void *));
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	int		bytes;
	va_list	args;

	bytes = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			bytes += formater(str, args);
		}
		else
			bytes += ft_putchar(*str);
		++str;
	}
	va_end(args);
	return (bytes);
}
