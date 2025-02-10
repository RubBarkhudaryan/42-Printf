/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:56:14 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/10 18:55:30 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned long long num, int upper)
{
	char	*src;
	int		count;
	char	arr[100];

	count = 0;
	if (!num)
		return (ft_putchar('0'));
	src = "0123456789abcdef";
	if (upper)
		src = "0123456789ABCDEF";
	while (num)
	{
		arr[count] = src[num % 16];
		num /= 16;
		++count;
	}
	arr[count] = '\0';
	ft_putstrrev(arr);
	return (count);
}
