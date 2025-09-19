/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:47:34 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 11:09:40 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_isprint('\n'));
//	printf("%d", ft_isprint('0'));
//	return (0);
//}
