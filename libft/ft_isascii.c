/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:45:19 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/02 19:46:40 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_isascii('P'));
//	printf("%d", ft_isascii('0'));
//	return (0);
//}
