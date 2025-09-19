/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:15:55 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/11 11:30:42 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_n;
	unsigned char	*s2_n;

	s1_n = (unsigned char *) s1;
	s2_n = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1_n[i] != s2_n[i] || s1_n[i] == 0 || s2_n[i] == 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"
//void run_test(const char *label, const char *s1, const char *s2, size_t n)
//{
//    int mine = ft_strncmp(s1, s2, n);
//    int orig = strncmp(s1, s2, n);
//    printf("%-18s | n=%2zu | s1=\"%s\" s2=\"%s\"\n",
//           label, n, s1, s2);
//    printf("  ft_strncmp -> %d\n", mine);
//    printf("  strncmp    -> %d\n\n", orig);
//}
//int main(void)
//{
//    // 1. สอง string เหมือนกัน
//    run_test("Equal strings", "Hello", "Hello", 5);
//    // 2. ต่างกันตั้งแต่ตัวแรก
//    run_test("Different first", "Hello", "World", 5);
//    // 3. เหมือนกันบางส่วน แต่หยุดก่อนต่าง
//    run_test("Prefix equal", "Hello", "HelloWorld", 5);
//    // 4. เทียบจนเจอต่าง
//    run_test("Compare diff", "Hello", "Helli", 5);
//    // 5. n=0 → ต้องคืน 0 เสมอ
//    run_test("Zero length", "ABC", "XYZ", 0);
//    // 6. ตัวหนึ่งเป็น prefix ของอีกตัว
//    run_test("One is prefix", "Hi", "High", 10);
//    // 7. ตัวเล็ก vs ตัวใหญ่
//    run_test("Case diff", "abc", "ABC", 3);
//    // 8. สตริงว่าง vs ไม่ว่าง
//    run_test("Empty vs non", "", "Test", 4);
//    // 9. ทั้งคู่สตริงว่าง
//    run_test("Both empty", "", "", 1);
//    // 10. n น้อยกว่าความยาวต่าง
//    run_test("Short n", "abcdef", "abcxyz", 3);
//    return 0;
//}