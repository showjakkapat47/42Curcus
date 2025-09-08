/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:49:37 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/02 19:53:58 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
//int	main(void)
//{
//	char c[60] = "Hello World";
//	printf("%d", ft_strlen(c));
//}
