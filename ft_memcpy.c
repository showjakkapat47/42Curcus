/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <Showjakkapat47@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:09:33 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/04 20:13:05 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dst;

	mem_src = (unsigned char *) src;
	mem_dst = (unsigned char *) dst;
	while (n > 0)
	{
		*(mem_dst++) = *(mem_src++);
		n--;
	}
	return (dst);
}
//#include <stdio.h>
//int main() {
// char src[] = "hello";
//char dst[10];
//ft_memcpy(dst, src, 6);
//  printf("%s\n", dst);
//    char src[] = "abcdef";
//   char dst[10];
//    ft_memcpy(dst, src, 3);
//    dst[3] = '\0';
//    printf("%s\n", dst);
//}
