/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:45:27 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/09 19:45:27 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstrrev(const char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		--i;
	}
}

int	ft_putnbr(long num)
{
	char	str_num[25];
	char	digit;
	int		len;

	while (num)
	{
		digit = (num % 10) + '0';
		num %= 10;
		str_num[len++] = digit;
	}
	ft_putstrrev(str_num);
	return (len);
}
