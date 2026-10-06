/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:34:23 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:34:50 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(char c, va_list *args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*args, int)));
	if (c == 's')
		return (ft_print_string(va_arg(*args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_number(va_arg(*args, int)));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (ft_print_hex(va_arg(*args, unsigned int), 0));
	if (c == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), 1));
	if (c == 'p')
		return (ft_print_pointer(va_arg(*args, void *)));
	if (c == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_conversion(format[i], &args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
