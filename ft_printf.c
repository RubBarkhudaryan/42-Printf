/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:42:04 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/09 19:42:04 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		bytes;
	va_list	args;

	bytes = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			bytes += ft_format(++str, args);
		else
			bytes += ft_putchar(*str);
		++str;
	}
	va_end(args);
	return (bytes);
}
