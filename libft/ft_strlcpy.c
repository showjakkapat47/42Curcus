/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:36:08 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 13:58:11 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dst != 0)
		ft_memcpy(dst, src, dstsize - 1);
	dst[dstsize - 1] = 0;
	return (src_len);
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