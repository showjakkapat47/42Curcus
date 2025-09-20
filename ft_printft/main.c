/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:25:24 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/19 14:00:12 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
	int	i;

	i = 42;
	ft_printf("%d", ft_printf("hello %corld", 'W'));
	ft_printf("%d", ft_printf("%s", "Hello World"));
	ft_printf("%d", ft_printf("%d", -4567));
	ft_printf("%d", ft_printf("%i", -4567910));
	ft_printf("%d", ft_printf("%u", 12345));
	ft_printf("%d", ft_printf("%%"));
	ft_printf("%d", ft_printf("%x", 48879));
	ft_printf("%d", ft_printf("%X", 48879));
	ft_printf("%d", ft_printf("%p", &i));
	return (0);
}