/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:41:51 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 02:43:04 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_pointer(void *ptr, size_t *counter)
{
    unsigned long long  ptr_returned;

    ptr_returned = (unsigned long long)ptr;
    ft_putstr("0x", counter);
    ft_putbase(ptr_returned, counter, BASE_LOWER);
}