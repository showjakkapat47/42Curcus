/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:21:19 by jaruengb          #+#    #+#             */
/*   Updated: 2025/09/19 13:41:24 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
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
}
//int	main(void)
//{
//	ft_putstr_fd("jndsjdls\n", 1);
//	ft_putstr_fd("Hello My World\n", 1);
//	ft_putstr_fd("O\n", 1);
//}