/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:43:05 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/09 18:18:43 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int		count;
	long	nn;

	nn = n;
	count = 1;
	if (nn < 0)
	{
		nn *= -1;
		count++;
	}
	while (nn > 9)
	{
		nn /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		neg;

	num = n;
	len = num_len(n);
	neg = (num < 0);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (neg)
	{
		num = -num;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len-- > neg)
	{
		str[len] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}
//#include <stdio.h>
//#include <limits.h>
//char    *ft_itoa(int n);
//int main(void)
//{
//    char *res;
//    // 1) ค่าบวกธรรมดา
//    res = ft_itoa(42);
//    printf("Test1: %s\n", res); // "42"
//    free(res);
//    // 2) ค่าลบธรรมดา
//    res = ft_itoa(-42);
//    printf("Test2: %s\n", res); // "-42"
//    free(res);
//    // 3) ศูนย์
//    res = ft_itoa(0);
//    printf("Test3: %s\n", res); // "0"
//    free(res);
//    // 4) ค่าบวกหลายหลัก
//    res = ft_itoa(123456789);
//    printf("Test4: %s\n", res); // "123456789"
//    free(res);
//    // 5) ค่าลบหลายหลัก
//    res = ft_itoa(-987654321);
//    printf("Test5: %s\n", res); // "-987654321"
//    free(res);
//    // 6) INT_MIN
//    res = ft_itoa(INT_MIN);
//    printf("Test6: %s\n", res); // "-2147483648"
//    free(res);
//    // 7) INT_MAX
//    res = ft_itoa(INT_MAX);
//    printf("Test7: %s\n", res); // "2147483647"
//    free(res);
//    return 0;
//}
