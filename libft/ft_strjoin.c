/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:41:09 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 14:36:55 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	char	*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	str = ft_calloc(len_s1 + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - len_s1])
	{
		str[i] = s2[i - len_s1];
		i++;
	}
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//    char *res;
//    // กรณีปกติ
//    res = ft_strjoin("Hello", "World");
//    printf("Test1: %s\n", res); // คาดหวัง → "HelloWorld"
//    free(res);
//    // ต่อ string ที่มีช่องว่าง
//    res = ft_strjoin("Hello ", "World");
//    printf("Test2: %s\n", res); // คาดหวัง → "Hello World"
//    free(res);
//    // s1 ว่าง
//    res = ft_strjoin("", "Suffix");
//    printf("Test3: %s\n", res); // คาดหวัง → "Suffix"
//    free(res);
//    // s2 ว่าง
//    res = ft_strjoin("Prefix", "");
//    printf("Test4: %s\n", res); // คาดหวัง → "Prefix"
//    free(res);
//    // ทั้งคู่ว่าง
//    res = ft_strjoin("", "");
//    printf("Test5: %s\n", res); // คาดหวัง → ""
//    free(res);
//    // string ยาวหน่อย
//    res = ft_strjoin("42", "Bangkok Campus");
//    printf("Test6: %s\n", res); // คาดหวัง → "42Bangkok Campus"
//    free(res);
//    return 0;
//}
