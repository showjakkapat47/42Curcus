/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:52:08 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/20 10:52:08 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int printpointer(void *p)
{
    unsigned long addr;
    int i;

    i = 0;
    if (!p)
        return (write(1, "(nil)", 5));
    addr = (unsigned long) p;
    i += write(1, "0x", 2);
    i += ft_puthexunlong(addr, "0123456789abcdef");
    return (i);
}