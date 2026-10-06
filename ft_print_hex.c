/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:44:01 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:44:03 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_put_hex(n / 16, base);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	return (ft_put_hex(n, base));
}
