/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:23:30 by abentaye          #+#    #+#             */
/*   Updated: 2023/06/21 15:25:33 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_type(const char *str, va_list ap, int i)
{
	int	len;

	len = 0;
	if (str[i] == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (str[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (str[i] == 'p')
		len += ft_print_address(va_arg(ap, unsigned long));
	else if (str[i] == 'd')
		len += ft_putnbr(va_arg(ap, int));
	else if (str[i] == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (str[i] == 'u')
		len += ft_putnbr_u(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		len += ft_print_hex(va_arg(ap, unsigned int), 'x');
	else if (str[i] == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), 'X');
	else if (str[i] == '%')
		len += ft_print_percent();
	return (len);
}
