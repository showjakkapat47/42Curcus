/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:01:31 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/03 18:36:03 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newb;

	newb = (unsigned char *) b;
	while (len > 0)
	{
		*(newb++) = (unsigned char) c;
		len--;
	}
	return (newb);
}
//#include <stdio.h>
//int main()
//{
//    char str[50] = "GeeksForGeeks is for programming geeks.";
//    printf("\nBefore memset(): %s\n", str);
//    ft_memset(str + 13, '.', 8*sizeof(char));

//    printf("After memset():  %s", str);
//    return 0;
//}