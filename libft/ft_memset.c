/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:01:31 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 19:49:44 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newb;

	newb = (unsigned char *) b;
	while (len > 0)
	{
		*(newb++) = (unsigned char) c;
		len--;
	}
	return (b);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"

//int main(void)
//{
//    char s[10] = "abcdefghi";

//    // ใช้ของเรา
//    char *p1 = ft_memset(s, 'X', 5);
//    printf("After ft_memset: %s\n", s);
//    printf("Return ptr match? %s\n", (p1 == s) ? "YES" : "NO");

//    // เทียบกับของ libc
//    char s2[10] = "abcdefghi";
//    char *p2 = memset(s2, 'X', 5);
//    printf("After libc memset: %s\n", s2);
//    printf("Return ptr match? %s\n", (p2 == s2) ? "YES" : "NO");
//}
