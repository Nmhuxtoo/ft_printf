/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:49:57 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 19:02:32 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_base (unsigned long long n, size_t *counter, char *base)
{
    unsigned long long  base_len;

    base_len = ft_strlen(base);
    if (n >= base_len)
    {
        print_base(n / base_len, counter, base);
        print_base(n % base_len, counter, base);
    }
    else
        print_char(base[n], counter);
}