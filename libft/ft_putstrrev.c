/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:56:57 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/10 18:55:56 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrrev(char *s)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		ft_putchar(s[len]);
		--len;
	}
}
