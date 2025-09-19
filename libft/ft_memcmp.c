/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:47:35 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/09 18:20:10 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*n_s1;
	unsigned char	*n_s2;
	size_t			i;

	n_s1 = (unsigned char *) s1;
	n_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (n_s1[i] != n_s2[i])
			return (n_s1[i] - n_s2[i]);
		i++;
	}
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"
//static int sgn(int x) { return (x > 0) - (x < 0); }
//void run_test(const char *label, const void *s1, const void *s2, size_t n)
//{
//    int raw_ft = ft_memcmp(s1, s2, n);
//    int raw_libc = memcmp(s1, s2, n);
//    int sign_ft = sgn(raw_ft);
//    int sign_libc = sgn(raw_libc);
//    printf("%-18s | n=%2zu\n", label, n);
//    printf("  s1=\"%.10s\" s2=\"%.10s\"\n", (const char*)s1, (const char*)s2);
//    printf("  ft_memcmp -> raw=%d sign=%d\n", raw_ft, sign_ft);
//    printf("  memcmp    -> raw=%d sign=%d\n", raw_libc, sign_libc);
//    printf("  Result: %s\n\n", (sign_ft == sign_libc ? "OK" : "MISMATCH"));
//}
//int main(void)
//{
//    const char buf1[] = "Hello World";
//    const char buf2[] = "Hello World";
//    const char buf3[] = "Hello Worle"; // d -> e
//    const char buf4[] = "Hella World"; // o -> a
//    const char raw1[] = {0x00, 0x01, 0x02, 0x03};
//    const char raw2[] = {0x00, 0x01, 0xFF, 0x03};
//    run_test("Equal buffers", buf1, buf2, sizeof(buf1));
//    run_test("Diff last char", buf1, buf3, sizeof(buf1));
//    run_test("Diff middle", buf1, buf4, sizeof(buf1));
//    run_test("Zero length", buf1, buf4, 0);
//    run_test("Cut before diff", buf1, buf4, 3);
//    run_test("Binary diff", raw1, raw2, sizeof(raw1));
//    run_test("Binary equal", raw1, raw2, 2);
//    return 0;
//}