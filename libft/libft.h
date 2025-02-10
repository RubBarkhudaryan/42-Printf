/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:57:09 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/10 20:25:08 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

int		ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putstrrev(char *s);
int		ft_putnbr(long long n, char type);
int		ft_puthex(unsigned long long num, int upper);
int		ft_putptr(unsigned long long num);

#endif