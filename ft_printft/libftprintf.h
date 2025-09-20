/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:34:49 by shhowjakkap       #+#    #+#             */
/*   Updated: 2025/09/19 13:56:49 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putstr_fd(char *c, int fd);
void	ft_putchar_fd(char c, int fd);
int		printchar(char c);
int		ft_printf(const char *format, ...);
int		check_percent(char c, va_list arg);
int		printstr(char *str);
void	ft_putnbr_fd(int n, int fd);
int     printint(int d);
int     printunint(unsigned int d);
int     printhex(unsigned int h, int upper);
int     ft_puthex(unsigned int h, char *letter);
int     ft_puthexunlong(unsigned long h, char *letter);
int     printpointer(void *p);
#endif
