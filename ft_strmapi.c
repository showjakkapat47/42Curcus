/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:43:29 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/09 15:58:16 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
//#include <ctype.h>
//char to_upper(unsigned int i, char c)
//{
//	(void)i;
//	return (char)toupper((unsigned char)c);
//}
///* ฟังก์ชันตัวอย่าง: ถ้า index คู่ → uppercase, index คี่ → lowercase */
//char alt_case(unsigned int i, char c)
//{
//	if (i % 2 == 0)
//		return (char)toupper((unsigned char)c);
//	else
//		return (char)tolower((unsigned char)c);
//}
///* ฟังก์ชันตัวอย่าง: shift char ตาม index */
//char shift_index(unsigned int i, char c)
//{
//	return c + (i % 3); // เลื่อนอักษรไป 0–2 step
//}
//#include <stdio.h>
//int main(void)
//{
//	char *res;
//	// 1) ปกติ: แปลงเป็น uppercase ทั้งหมด
//	res = ft_strmapi("hello world", to_upper);
//	printf("Case1: %s\n", res); // "HELLO WORLD"
//	free(res);
//	// 2) สลับตัวใหญ่เล็กตาม index
//	res = ft_strmapi("HeLLo", alt_case);
//	printf("Case2: %s\n", res); // "HeLlO"
//	free(res);
//	// 3) Shift ด้วย index
//	res = ft_strmapi("abcd", shift_index);
//	printf("Case3: %s\n", res); // "aced"
//	free(res);
//	// 4) Empty string
//	res = ft_strmapi("", to_upper);
//	printf("Case4: '%s'\n", res); // ""
//	free(res);
//	// 5) NULL input (ควร return NULL)
//	res = ft_strmapi(NULL, to_upper);
//	printf("Case5: %s\n", res ? res : "NULL"); // "NULL"
//	return 0;
//}