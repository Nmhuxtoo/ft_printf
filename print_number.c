/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:49:37 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 11:15:56 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_number(long long int number, size_t *counter)
{
    if (number < 0)
    {
        print_char('-', counter);
        print_number(-number, counter);
    }
    else
    {
        if (number > 9)
            print_number(number / 10, counter);
        print_char('0' + number % 10, counter);
    }
}