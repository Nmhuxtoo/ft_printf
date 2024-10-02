/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:30:29 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 18:45:34 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, const char *str, size_t *counter)
{
	if (*str == 'c')
		print_char(va_arg(va, int), counter);
	if (*str == 's')
    	print_string(va_arg(va, char *), counter);
	if (*str == 'p')
        print_pointer(va_arg(va, void *), counter);
	if (*str == 'd' || *str == 'i')
        print_number(va_arg(va, int), counter);
	if (*str == 'u')
        print_base(va_arg(va, int), counter, "0123456789");
	if (*str == 'x')
        print_base(va_arg(va, int), counter, BASE_LOWER);
	if (*str == 'X')
        print_base(va_arg(va, int), counter, BASE_UPPER);
	if (*str == '%')
        ft_putchar(va_arg(va, int), counter);
}

int ft_printf(const char *str, ...)
{
	size_t i;
	va_list ap;

	i = 0;
	va_start(ap, str);
	
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(ap, str, &i);
		}
		else
			ft_putchar(*str, &i);
		str++;
	}
	return (i);
}
