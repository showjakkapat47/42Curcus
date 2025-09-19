/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:31:04 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/14 21:45:18 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;

	if (!dst && !src)
		return (NULL);
	n_dst = (unsigned char *) dst;
	n_src = (unsigned char *) src;
	if (n_dst > n_src)
	{
		while (len-- > 0)
			n_dst[len] = n_src[len];
	}
	else
	{
		while (len > 0)
		{
			*(n_dst++) = *(n_src++);
			len--;
		}
	}
	return (dst);
}
//#include <stdio.h>
//int main(void)
//{
//    char str1[20] = "HelloWorld";
//    char str2[20] = "HelloWorld";
//    char str3[20] = "HelloWorld";
//    char str4[20] = "HelloWorld";
//    // 1. ปกติ (dst < src)
//    ft_memmove(str1+5, str1, 5);   // copy "Hello" ไปหลัง
//    printf("Case1: %s\n", str1);   // HelloHello
//    // 2. ปกติ (src < dst) แต่ไม่ overlap
//    char src2[] = "abcdef";
//    char dst2[10];
//    ft_memmove(dst2, src2, 7); // รวม '\0'
//    printf("Case2: %s\n", dst2);   // abcdef
//    // 3. overlap (dst > src)
//    ft_memmove(str2+2, str2, 5);   // "Hello" → ตำแหน่ง index 2
//    printf("Case3: %s\n", str2);   // HeHello
//    // 4. overlap (dst < src)
//    ft_memmove(str3, str3+2, 5);   // "lloWo" → ตำแหน่ง index 0
//    printf("Case4: %s\n", str3);   // lloWorld
//    // 5. len = 0 (ไม่ทำอะไร)
//    ft_memmove(str4+2, str4, 0);
//    printf("Case5: %s\n", str4);   // HelloWorld
//    return 0;
//}