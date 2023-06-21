/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:51:38 by abentaye          #+#    #+#             */
/*   Updated: 2023/06/21 19:00:26 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(int len, unsigned long long n, char *base)
{
	if (n == 0)
		return (len);
	len = ft_put_hex(len + 1, n / 16, base);
	write(1, base + (n % 16), 1);
	return (len);
}

int	ft_print_hex(unsigned long long n, char format)
{
	char	*basex;
	char	*base_upx;
	int		len;

	basex = "0123456789abcdef";
	base_upx = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
	{
		len += write(1, "0", 1);
		return (1);
	}
	if (format == 'x')
		return (ft_put_hex(len, n, basex));
	return (ft_put_hex(len, n, base_upx));
}
