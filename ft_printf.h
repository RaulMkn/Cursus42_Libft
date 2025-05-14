/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:13:18 by rmakende          #+#    #+#             */
/*   Updated: 2025/05/14 21:07:36 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_putchar_fd_printf(char c, int fd);
int		ft_putstr_fd_printf(char *s, int fd);
int		ft_putnbr_fd_printf(int n, int fd);
int		ft_putpointer_fd_printf(void *ptr, int fd);
int		ft_putexa_fd_printf(unsigned int num, int fd, char c);
int		ft_putunsigned_fd_printf(unsigned int nb, int fd);

#endif