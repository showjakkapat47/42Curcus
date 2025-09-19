/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:27:04 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/11 14:30:38 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 && haystack == 0)
		return (NULL);
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (i + j < len && haystack[i + j]
			&& haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
//#include <stdio.h>
//#include "libft.h"
//void run_test(const char *label, const 
//char *big, const char *little, size_t len)
//{
//    char *res = ft_strnstr(big, little, len);
//    printf("%-20s | len=%2zu | big=\"%s\" | little=\"%s\"\n",
//           label, len, big, little);
//    printf("  Result -> %s\n\n", res ? res : "(null)");
//}
//int main(void)
//{
//    const char *text = "Hello World";
//    // 1. เจอปกติ
//    run_test("Normal match", text, "World", 11);
//    // 2. ไม่เต็มคำ (len เล็กไป)
//    run_test("Cut early A", text, "World", 7);
//    run_test("Cut early B", text, "Hello", 3);
//    run_test("Cut early C", text, "lo W", 4);
//    // 3. ไม่เจอเลย
//    run_test("Not found", text, "42", 11);
//    // 4. needle ว่าง
//    run_test("Empty needle", text, "", 5);
//    // 5. เจอต้น string
//    run_test("At beginning", text, "Hello", 5);
//    // 6. needle ยาวกว่า big
//    run_test("Needle longer", "Hi", "Hiii", 5);
//    // 7. len = 0
//    run_test("Len zero", text, "Hello", 0);
//    run_test("Len zero + empty", text, "", 0);
//    // 8. needle อยู่ท้ายเป๊ะ
//    run_test("At end", text, "d", 11);
//    // 9. needle อยู่กลาง
//    run_test("In middle", text, "lo Wo", 11);
//    // 10. len เล็กกว่าความยาว needle พอดี
//    run_test("Len shorter than needle", text, "World", 3);
//    return 0;
//}