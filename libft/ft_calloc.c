/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 07:47:08 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/14 21:40:56 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*cal;
	size_t			i;

	cal = malloc(size * count);
	i = 0;
	if (!cal)
		return (NULL);
	while (i < count * size)
	{
		cal[i++] = 0;
	}
	return (cal);
}
//#include <stdio.h>
//void test_case(size_t nmemb, size_t size)
//{
//    void *p1 = ft_calloc(nmemb, size);
//    void *p2 = calloc(nmemb, size);
//    if (!p1 || !p2)
//    {
//        printf("calloc failed\n");
//        free(p1);
//        free(p2);
//        return;
//    }
//    // เปรียบเทียบกับ calloc ของ system
//    if (memcmp(p1, p2, nmemb * size) == 0)
//        printf("OK: nmemb=%zu size=%zu\n", nmemb, size);
//    else
//        printf("MISMATCH: nmemb=%zu size=%zu\n", nmemb, size);
//    free(p1);
//    free(p2);
//}
//int main(void)
//{
//    test_case(5, sizeof(int));     // int array
//    test_case(10, sizeof(char));   // char array
//    test_case(3, sizeof(double));  // double array
//    test_case(0, sizeof(int));     // edge case: zero nmemb
//    test_case(5, 0);               // edge case: zero size
//    test_case(1000, 1);            // bigger allocation
//    return 0;
//}