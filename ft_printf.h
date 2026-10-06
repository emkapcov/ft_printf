/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkapcov <emkapcov@student.42.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:43:30 by emkapcov          #+#    #+#             */
/*   Updated: 2026/09/17 20:43:37 by emkapcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> //gives write
# include <stdarg.h> //gives valist, vastart, vaarg, vaend

int	ft_printf(const char *format, ...); //there is a function like thisss
//allows extras
int	ft_print_char(int c);
int	ft_print_string(char *s);
int	ft_print_number(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, int uppercase);
int	ft_print_pointer(void *ptr);

#endif
