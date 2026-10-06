/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:43:51 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:43:55 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_put_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_unsigned(unsigned int n)
{
	return (ft_put_unsigned(n));
}
