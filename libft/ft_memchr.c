/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:33:33 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/11 11:07:02 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	unsign_c;
	size_t			i;

	mem = (unsigned char *) s;
	unsign_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (mem[i] == unsign_c)
			return ((void *) &mem[i]);
		i++;
	}
	return (NULL);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"
//void run_test(const char *label, const void *s, int c, size_t n)
//{
//    unsigned char *mine = ft_memchr(s, c, n);
//    unsigned char *orig = memchr(s, c, n);
//    printf("%-18s | n=%2zu | c=%3d ('%c')\n",
//           label, n, c, (c >= 32 && c < 127) ? c : '.');
//    printf("  buffer     = \"%.10s\"\n", (const char *)s);
//    printf("  ft_memchr -> %s\n", mine ? (char*)mine : "NULL");
//    printf("  memchr    -> %s\n\n", orig ? (char*)orig : "NULL");
//}
//int main(void)
//{
//    const char buf1[] = "Hello World";
//    const char buf2[] = {0x00, 0x01, 0x02, 0x03, 0xFF, 0x04, 0x00};
//    // 1. หาเจอใน buffer ปกติ
//    run_test("Find middle", buf1, 'o', sizeof(buf1));
//    // 2. หาเจอตัวแรก
//    run_test("Find first", buf1, 'H', sizeof(buf1));
//    // 3. หาเจอตัวสุดท้าย (ยังอยู่ใน n)
//    run_test("Find last", buf1, 'd', sizeof(buf1));
//    // 4. หาไม่เจอ
//    run_test("Not found", buf1, 'z', sizeof(buf1));
//    // 5. จำกัด n เล็กกว่า index ที่เจอ → ต้อง NULL
//    run_test("Cut search", buf1, 'W', 5);
//    // 6. หา '\0' ใน buffer string
//    run_test("Find NUL", buf1, '\0', sizeof(buf1));
//    // 7. buffer ที่มี byte raw (ไม่ใช่ text)
//    run_test("Find raw byte", buf2, 0xFF, sizeof(buf2));
//    // 8. หา 0x00 ใน raw buffer
//    run_test("Find zero byte", buf2, 0x00, sizeof(buf2));
//    // 9. หาไม่เจอใน raw buffer
//    run_test("Raw not found", buf2, 0xAA, sizeof(buf2));
//    return 0;
//}