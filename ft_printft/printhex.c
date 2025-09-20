/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:36:46 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/20 09:36:46 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int printhex(unsigned int h, int upper)
{
	char	*letter;

	if (upper)
		letter = "0123456789ABCDEF";
	else
		letter = "0123456789abcdef";
	return (ft_puthex(h, letter));
}