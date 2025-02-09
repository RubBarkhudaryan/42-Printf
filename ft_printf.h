/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:42:11 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/02/09 19:42:11 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(long num);
int		ft_format(const char *str, va_list args);
int		ft_puthex(unsigned long long num, int mode);
int		ft_putptr(unsigned long long num);

#endif