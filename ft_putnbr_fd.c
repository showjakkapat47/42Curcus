/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:16:46 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/09 18:20:48 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	print_n;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			print_n = n + '0';
			write(fd, &print_n, 1);
		}
	}
}
//#include <stdio.h>
//#include <unistd.h>
//int main(void)
//{
//    printf("Case1: "); ft_putnbr_fd(42, 1); write(1, "\n", 1);
//    printf("Case2: "); ft_putnbr_fd(-12345, 1); write(1, "\n", 1);
//    printf("Case3: "); ft_putnbr_fd(0, 1); write(1, "\n", 1);
//    printf("Case4: "); ft_putnbr_fd(2147483647, 1); write(1, "\n", 1);
//    printf("Case5: "); ft_putnbr_fd(-2147483648, 1); write(1, "\n", 1);
//    return 0;
//}