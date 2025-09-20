/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 08:32:17 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/20 08:32:17 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int printunint(unsigned int d)
{
    unsigned int i;

    i = 0;
    ft_putnbr_fd(d, 1);
    while (d)
    {
        d /= 10;
        i++;
    }
    return (i);
}