/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:56:34 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/10 20:25:56 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(long long n, char type)
{
	int				bytes;
	unsigned int	num;

	bytes = 0;
	num = 0;
	if (type == 'u')
	{
		num = (unsigned int) n;
		if (n >= 10)
			bytes += ft_putnbr(n / 10, type);
		bytes += ft_putchar((n % 10) + '0');
	}
	else
	{
		if (n < 0)
		{
			bytes += ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
			bytes += ft_putnbr(n / 10, type);
		bytes += ft_putchar((n % 10) + '0');
	}
	return (bytes);
}
