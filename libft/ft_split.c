/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:42:39 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 19:35:18 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	trig;
	int	count;

	i = 0;
	trig = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && trig)
		{
			trig = 0;
			count++;
		}
		else if (s[i] == c)
		{
			trig = 1;
		}
		i++;
	}
	return (count);
}

static char	*str_word(const char *s, char c, int *i)
{
	int		start;
	char	*str;
	int		len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	return (str);
}

static char	**free_word(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**arr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	count = count_word(s, c);
	arr = ft_calloc((count + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (count > j)
	{
		arr[j] = str_word(s, c, &i);
		if (!arr[j])
			return (free_word(arr, j));
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
//#include <stdio.h>
//char **ft_split(char const *s, char c);
//static void	print_and_free(char **arr, const char *label, char delim)
//{
//	int i = 0;
//	printf("\n[%s] delim='%s'\n", label,
//(delim == '\0' ? "\\0" : (char[]){delim, 0}));
//	if (!arr)
//	{
//		printf("-> (NULL)\n");
//		return;
//	}
//	while (arr[i])
//	{
//		printf("res[%d] = '%s'\n", i, arr[i]);
//		free(arr[i]);
//		i++;
//	}
//	free(arr);
//	if (i == 0)
//		printf("-> (empty array: only NULL terminator)\n");
//}
//int	main(void)
//{
//	char **res;
//	// 1) ปกติ
//	res = ft_split("Hello World 42 Bangkok", ' ');
//	print_and_free(res, "Case1 basic spaces", ' ');
//	// 2) delimiter ติดกันหลายตัว
//	res = ft_split(",,a,,b,c,,", ',');
//	print_and_free(res, "Case2 consecutive commas", ',');
//	// 3) มี delimiter ที่หัว–ท้าย
//	res = ft_split("   leading and trailing   ", ' ');
//	print_and_free(res, "Case3 leading/trailing spaces", ' ');
//	// 4) มีแต่ delimiter ล้วน
//	res = ft_split("----", '-');
//	print_and_free(res, "Case4 only delimiters", '-');
//	// 5) สตริงว่าง
//	res = ft_split("", ' ');
//	print_and_free(res, "Case5 empty string", ' ');
//	// 6) ไม่มี delimiter เลย
//	res = ft_split("node", ',');
//	print_and_free(res, "Case6 no delimiter", ',');
//	// 7) delimiter = '\n'
//	res = ft_split("line1\nline2\n\nline3", '\n');
//	print_and_free(res, "Case7 newline delimiter", '\n');
//	// 8) delimiter = '\t'
//	res = ft_split("a\tb\t\tc", '\t');
//	print_and_free(res, "Case8 tab delimiter", '\t');
//	// 9) delimiter = '\0'
//	res = ft_split("abc", '\0');
//	print_and_free(res, "Case9 delimiter NUL", '\0');
//	// 10) ตัวเดียวเท่ากับ delimiter
//	res = ft_split("x", 'x');
//	print_and_free(res, "Case10 single char = delim", 'x');
//	return (0);
//}