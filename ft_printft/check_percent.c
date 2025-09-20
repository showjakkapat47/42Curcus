/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:09:53 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/19 13:59:56 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_percent(char c, va_list arg)
{
	if (c == 'c')
		return (printchar(va_arg(arg, int)));
	if (c == 's')
		return (printstr(va_arg(arg, char *)));
	if (c == 'd' || c == 'i')
		return (printint(va_arg(arg, int)));
	if (c == 'u')
		return (printunint(va_arg(arg, unsigned int)));
	if (c == '%')
		return (write(1, "%", 1));
	if (c == 'x')
		return (printhex(va_arg(arg, unsigned int), 0));
	if (c == 'X')
		return (printhex(va_arg(arg, unsigned int), 1));
	if (c == 'p')
		return (printpointer(va_arg(arg, void *)));
	return (0);
}
