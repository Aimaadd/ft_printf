/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:22:48 by abentaye          #+#    #+#             */
/*   Updated: 2023/06/21 15:25:24 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_u(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_printnbr_u(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}
