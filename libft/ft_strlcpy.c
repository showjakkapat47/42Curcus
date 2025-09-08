/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:36:08 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/03 18:46:29 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != 0)
			i++;
		return (i);
	}
	while (src[i] != 0 && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (i >= size)
		dst[i] = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
//int main(void) {
//    char s1[] = "Hello, 42!";
//    char s2[50];  
//    size_t c = ft_strlcpy(s2, s1, 5);
//    printf("%s", s2);
//	printf("%zu", c);
//    return 0;
//}