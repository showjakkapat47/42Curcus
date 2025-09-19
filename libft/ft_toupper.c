/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:04:13 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/03 18:03:39 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_toupper('d'));
//	printf("%d", ft_toupper('O'));
//	return (0);
//}