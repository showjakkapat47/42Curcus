/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:11:49 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/19 14:01:17 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			i += check_percent(*format, arg);
		}
		else
		{
			write(1, format, 1);
			i++;
		}
		format++;
	}
	ft_putchar_fd('\n', 1);
	return (i);
}
