/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:35:38 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/10 12:57:54 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*new;

	i = 0;
	new = NULL;
	while (s[i])
	{
		if (s[i] == c)
			new = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		new = (char *) &s[i];
	return (new);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"
//void run_test(const char *label, const char *s, int c)
//{
//    char *mine = ft_strrchr(s, c);
//    char *orig = strrchr(s, c);
//    printf("%-20s | s=\"%s\" c=%3d ('%c')\n",
//           label, s, c, (c >= 32 && c < 127) ? c : '.');
//    printf("  ft_strrchr -> %s\n", mine ? mine : "NULL");
//    printf("  strrchr    -> %s\n\n", orig ? orig : "NULL");
//}
//int main(void)
//{
//    // 1. เจอในกลาง string
//    run_test("Find middle", "Hello World", 'o');  // ต้องได้ "orld"
//    // 2. เจอตัวแรก
//    run_test("Find first", "Hello", 'H');         // ต้องได้ "Hello"
//    // 3. เจอตัวสุดท้าย
//    run_test("Find last", "Hello", 'o');          // ต้องได้ "o"
//    // 4. ไม่เจอเลย
//    run_test("Not found", "Hello", 'z');          // NULL
//    // 5. หา '\0' (ต้องคืน pointer ไปยัง null terminator)
//    run_test("Find NUL", "Hello", '\0');
//    // 6. สตริงว่าง + หา '\0'
//    run_test("Empty + NUL", "", '\0');            // ชี้ไปที่ตัวแรก (คือ NUL)
//    // 7. สตริงว่าง + หาอย่างอื่น
//    run_test("Empty not found", "", 'A');         // NULL
//    // 8. ตัวซ้ำหลายตัว (ต้องคืนตัวสุดท้าย)
//    run_test("Multiple matches", "banana", 'a');  // ต้องได้ "a"
//    // 9. ค่าที่ไม่ใช่ ASCII printable เช่น '\n'
//    run_test("Find newline", "line1\nline2", '\n');
//    // 10. Loop test: ตรวจทุก ASCII ว่าเหมือน strrchr หรือเปล่า
//    const char *sample = "42Bangkok!";
//    for (int c = 0; c <= 127; c++)
//    {
//        if (ft_strrchr(sample, c) != strrchr(sample, c))
//        {
//            printf("Mismatch found! c=%d\n", c);
//        }
//    }
//    printf("Loop test done.\n");
//    return 0;
//}
