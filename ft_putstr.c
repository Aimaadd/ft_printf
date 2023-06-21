/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:00:02 by abentaye          #+#    #+#             */
/*   Updated: 2023/06/21 16:49:20 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}
