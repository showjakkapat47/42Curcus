/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:37:58 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/08 13:50:25 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i + start] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//	printf("1: %s\n", ft_substr("Hello World", 6, 5)); // "World"
//	printf("2: %s\n", ft_substr("Hello", 0, 2));       // "He"
//	printf("3: %s\n", ft_substr("Hello", 10, 3));      // ""
//	printf("4: %s\n", ft_substr("ABCDE", 2, 10));      // "CDE"
//	printf("5: %s\n", ft_substr("ABCDE", 5, 5));       // "" (start == strlen)
//}
