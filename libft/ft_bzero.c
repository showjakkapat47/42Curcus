/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:13:33 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/05 22:55:22 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bze;

	bze = (unsigned char *) s;
	while (n > 0)
	{
		*(bze++) = 0;
		n--;
	}
}
//#include <stdio.h>
//int main() {
//    char str[10] = "abcdef";
//    bzero(str+2, 3);    // ทำให้ c,d,e เป็น '\0'
//
//    printf("%s\n", str); // แสดง "ab"
//}
