/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:52:07 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/09 19:52:07 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num, int mode)
{
	char	*src;
	int		bytes;

	bytes = 0;
	src = "0123456789abcdef";
	if (mode)
		src = "0123456789ABCDEF";
	while (num)
	{
		bytes += ft_putchar(src[num / 16]);
		num /= 16;
	}
	return (bytes);
}
