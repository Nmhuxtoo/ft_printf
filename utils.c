/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:48:20 by jdias-go          #+#    #+#             */
/*   Updated: 2024/10/02 18:57:05 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t   ft_strlen(const char *str)
{
    size_t  i;
    
    i = 0;
    while (*str++)
        i++;
    return (i);
}



 
