/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:17:22 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/19 13:41:22 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//int	main(void)
//{
//	ft_putchar_fd('8', 1);
//	ft_putchar_fd('O', 1);
//	ft_putchar_fd('p', 1);
//}