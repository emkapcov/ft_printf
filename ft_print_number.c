/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:44:08 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:44:12 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_number(long long n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_put_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_number(int n)
{
	long long	number;
	int			count;

	number = n;
	count = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		count++;
		number = -number;
	}
	count += ft_put_number(number);
	return (count);
}
