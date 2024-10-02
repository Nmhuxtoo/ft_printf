/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:34:33 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 19:17:11 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#define BASE_LOWER "0123456789abcdef"
#define BASE_UPPER "0123456789ABCDEF"

#include <stdarg.h>
#include <stddef.h>

int print_char(char c, size_t *counter);
int ft_printf(const char *str, ...);

void print_string(char *str, size_t i);
void print_pointer(void *ptr, size_t *counter);
void    print_number(long long int number, size_t *counter);
void    print_base (unsigned long long n, size_t *counter, char *base);
void	ft_format(va_list va, const char *str, size_t *counter);

#endif