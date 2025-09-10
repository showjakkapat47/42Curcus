/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:41:30 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/08 17:20:39 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	len_first(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (check_trim(set, s1[i]))
		i++;
	return (i);
}

static size_t	count_notrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	len = ft_strlen(s1);
	start = len_first(s1, set);
	if (start == len)
		return (0);
	while (len > start && check_trim(set, s1[len - 1]))
		len--;
	return (len - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	size_t	first;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	count = count_notrim(s1, set);
	first = len_first(s1, set);
	str = ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (count > 0)
	{
		str[i] = s1[i + first];
		i++;
		count--;
	}
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//    char *res;
//    // 1) set = "abc" → ตัด a,b,c ที่หัว–ท้าย
//    res = ft_strtrim("aaabHello Worldccc", "abc");
//    printf("Case1: '%s'\n", res); // คาดหวัง: "Hello World"
//    free(res);
//    // 2) set = "!?. " → ตัดช่องว่าง + เครื่องหมาย ! ? .
//    res = ft_strtrim("!!? Hello World ?!!", "!?. ");
//    printf("Case2: '%s'\n", res); // คาดหวัง: "Hello World"
//    free(res);
//    // 3) set = "0x" → ใช้ลบเลข 0 กับ x ที่หัว–ท้าย
//    res = ft_strtrim("0000x42Bangkokx000", "0x");
//    printf("Case3: '%s'\n", res); // คาดหวัง: "42Bangkok"
//    free(res);
//    // 4) set = "-= " → ตัดทั้ง - , = และช่องว่าง
//    res = ft_strtrim("  --==Trim Me==--  ", "-= ");
//    printf("Case4: '%s'\n", res); // คาดหวัง: "Trim Me"
//    free(res);
//    // 5) set = "XYZ" → ไม่มีตัวที่ตรง → ไม่โดนตัด
//    res = ft_strtrim("Hello", "XYZ");
//    printf("Case5: '%s'\n", res); // คาดหวัง: "Hello"
//    free(res);
//    return 0;
//}