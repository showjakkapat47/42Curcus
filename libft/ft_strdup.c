/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 08:57:20 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/09 18:21:11 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include "libft.h"   // ft_strdup ของนาย

//void t(const char *s)
//{
//    char *mine = ft_strdup(s);
//    char *orig = strdup(s);

//    printf("Input: \"%s\"\n", s);
//    printf("  ft_strdup -> \"%s\"\n", mine ? mine : "(null)");
//    printf("  strdup    -> \"%s\"\n\n", orig ? orig : "(null)");

//    free(mine);
//    free(orig);
//}

//int main(void)
//{
//    t("Hello");
//    t("");
//    t("42Bangkok");
//    t("   leading spaces");
//    t("trailing spaces   ");
//    t("special!@#$%^&*()");
//    t("with\nnew\nlines");
//    t("with\0hidden");   // string จะหยุดที่ \0
//    return 0;
//}
