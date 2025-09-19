/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:10:58 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/02 20:14:55 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%c", ft_tolower('d'));
//	printf("%c", ft_tolower('O'));
//	return (0);
//}
