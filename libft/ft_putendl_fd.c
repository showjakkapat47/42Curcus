/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:27:09 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/11 19:38:55 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *c, int fd)
{
	int	i;

	i = 0;
	if (!c)
		return ;
	while (c[i] != 0)
	{
		write(fd, &(c[i]), 1);
		i++;
	}
	write(fd, "\n", 1);
}
//int	main(void)
//{
//	ft_putendl_fd("jndsjdls", 1);
//	ft_putendl_fd("Hello My World", 1);
//	ft_putendl_fd("O", 1);
//}