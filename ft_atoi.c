/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 07:46:24 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/09 18:03:58 by shhowjakkapat    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	var;

	i = 0;
	sign = 1;
	var = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (var * 10) + str[i] - '0';
		i++;
	}
	return (var * sign);
}
//#include <stdio.h>
//#include <stdlib.h>
//#include "libft.h"
//void t(const char *s){
//    printf("\"%s\" -> ft:%d sys:%d\n",s,ft_atoi(s),atoi(s));
//}
//int main(void){
//    t("42");
//    t("   123");
//    t("-99");
//    t("+77");
//    t("0000123");
//    t("42abc123");
//    t("abc42");
//    t("   -0012a42");
//    t("");
//    t("2147483647");
//    t("-2147483648");
//    t("--42");
//    t("++42");
//    t("+-42");
//    t("-+42");
//    return 0;
//}
