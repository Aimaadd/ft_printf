/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:28:03 by abentaye          #+#    #+#             */
/*   Updated: 2023/06/21 15:25:27 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_type(const char *str, va_list ap, int i);
int	ft_putnbr(int n);
int	ft_print_percent(void);
int	ft_putnbr_u(unsigned long n);
int	ft_print_hex(unsigned long long n, char format);
int	ft_print_address(unsigned long long n);

#endif