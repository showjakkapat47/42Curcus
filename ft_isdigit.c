/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:30:53 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/02 19:39:17 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_isdigit('P'));
//	printf("%d", ft_isdigit('0'));
//	return (0);
//}
