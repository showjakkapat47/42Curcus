/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:45:12 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/20 09:45:12 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex(unsigned int h, char *letter)
{
    int i;

    i = 0;
    if (h >= 16)
        i += ft_puthex(h / 16, letter);
    i += write(1, &(letter[h % 16]), 1);
    return (i);
}