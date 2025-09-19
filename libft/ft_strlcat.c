/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:11:27 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/11 14:25:45 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		len_dst = dstsize;
	if (len_dst == dstsize)
		return (dstsize + len_src);
	if (len_src < dstsize - len_dst)
		ft_memcpy(dst + len_dst, src, len_src + 1);
	else
	{
		ft_memcpy(dst + len_dst, src, dstsize - len_dst - 1);
		dst[dstsize - 1] = 0;
	}
	return (len_dst + len_src);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"
//void run_test(const char *label, char *dst, const char *src, size_t dstsize)
//{
//    char buffer[50]; // buffer เผื่อใหญ่ๆ
//    size_t result;
//    // copy dst เข้า buffer ก่อน (กันค่าเดิมเสีย)
//    strcpy(buffer, dst);
//    result = ft_strlcat(buffer, src, dstsize);
//    printf("%-20s | dstsize=%2zu | result=%2zu | \"%s\"\n",
//           label, dstsize, result, buffer);
//}
//int main(void)
//{
//    // 1. กรณีปกติ: มีพื้นที่เหลือพอ
//    run_test("Enough space", "Hello", " World", 20);
//    // 2. กรณีตัดทอน: buffer เล็กเกิน
//    run_test("Truncate", "Hello", "World", 8);
//    // 3. กรณี buffer พอดีเป๊ะ
//    run_test("Exact fit", "Hi", "!", 4);
//    // 4. กรณี dst ว่าง
//    run_test("Empty dst", "", "ABC", 5);
//    // 5. กรณี src ว่าง
//    run_test("Empty src", "Hello", "", 10);
//    // 6. กรณี dstsize = 0 (ห้ามแตะ dst)
//    run_test("dstsize=0", "Hello", "World", 0);
//    // 7. กรณี dstsize เล็กกว่าความยาว dst (ตรวจว่าป้องกัน out-of-bound)
//    run_test("dstsize < len(dst)", "Hello", "World", 3);
//    return 0;
//}