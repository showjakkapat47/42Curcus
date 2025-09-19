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
	return (0);
}
