/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:43:42 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:43:45 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_pointer(unsigned long long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_put_pointer(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long long	address;
	int					count;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long long)ptr;
	write(1, "0x", 2);
	count = ft_put_pointer(address);
	return (count + 2);
}
