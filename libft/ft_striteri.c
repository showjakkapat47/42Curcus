/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:43:59 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 19:42:17 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
//#include <stdio.h>
//#include <ctype.h>
///* ฟังก์ชัน: แปลงเป็น uppercase */
//void to_upper_all(unsigned int i, char *c)
//{
//	(void)i;
//	*c = (char)toupper((unsigned char)*c);
//}
///* ฟังก์ชัน: uppercase ถ้า index คู่ */
//void upper_even(unsigned int i, char *c)
//{
//	if (i % 2 == 0)
//		*c = (char)toupper((unsigned char)*c);
//	else
//		*c = (char)tolower((unsigned char)*c);
//}
///* ฟังก์ชัน: shift char ด้วย index */
//void shift_index(unsigned int i, char *c)
//{
//	*c = *c + (i % 3); // เลื่อน char ไป 0–2 step ตาม index
//}
//int main(void)
//{
//	char s1[] = "hello world";
//	char s2[] = "HeLLo";
//	char s3[] = "abcd";
//	char s4[] = "";
//	char *s5 = NULL;
//	// 1) แปลง uppercase ทั้งหมด
//	ft_striteri(s1, to_upper_all);
//	printf("Case1: %s\n", s1); // "HELLO WORLD"
//	// 2) Upper/lower สลับตาม index
//	ft_striteri(s2, upper_even);
//	printf("Case2: %s\n", s2); // "HeLlO"
//	// 3) Shift char ด้วย index
//	ft_striteri(s3, shift_index);
//	printf("Case3: %s\n", s3); // "aced"
//	// 4) Empty string
//	ft_striteri(s4, to_upper_all);
//	printf("Case4: '%s'\n", s4); // ""
//	// 5) NULL input (ควรไม่ crash, ไม่ทำอะไร)
//	ft_striteri(s5, to_upper_all);
//	printf("Case5: %s\n", s5 ? s5 : "NULL"); // "NULL"
//	return 0;
//}
