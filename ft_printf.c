/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:19:36 by rmakende          #+#    #+#             */
/*   Updated: 2025/05/14 21:07:21 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putexa_fd_printf(unsigned int num, int fd, char c)
{
	const char		*hex_digits_lower;
	const char		*hex_digits_upper;
	char			buffer[9];
	int				i;

	hex_digits_lower = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	buffer[8] = '\0';
	i = 7;
	if (num == 0)
		return (ft_putchar_fd_printf('0', fd));
	while (i >= 0)
	{
		if (c == 'x')
			buffer[i] = hex_digits_lower[num % 16];
		else if (c == 'X')
			buffer[i] = hex_digits_upper[num % 16];
		num /= 16;
		i--;
	}
	i = 0;
	while (buffer[i] == '0')
		i++;
	return (ft_putstr_fd_printf(&buffer[i], fd));
}

int	ft_putunsigned_fd_printf(unsigned int n, int fd)
{
	char	str[10];
	int		i;
	int		result;

	if (n == 0)
	{
		return (ft_putchar_fd_printf('0', fd));
	}
	i = 0;
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	result = 0;
	while (i > 0)
	{
		result += ft_putchar_fd_printf(str[--i], fd);
	}
	return (result);
}

int	ft_putpointer_fd_printf(void *p, int fd)
{
	unsigned long long	addr;
	char				buffer[19];
	const char			*hex_digits = "0123456789abcdef";
	int					i;
	int					length;

	if (p == NULL)
		return (ft_putstr_fd_printf("(nil)", fd));
	i = 18;
	addr = (unsigned long long)p;
	buffer[i--] = '\0';
	while (addr != 0)
	{
		buffer[i--] = hex_digits[addr % 16];
		addr /= 16;
	}
	buffer[i--] = 'x';
	buffer[i--] = '0';
	length = ft_putstr_fd_printf(&buffer[i + 1], fd);
	return (length);
}

static int	handle_c(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar_fd_printf(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_fd_printf(va_arg(args, char *), 1));
	else if (c == 'p')
		return (ft_putpointer_fd_printf(va_arg(args, void *), 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd_printf(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putunsigned_fd_printf(va_arg(args, unsigned int), 1));
	else if (c == 'x' || c == 'X')
		return (ft_putexa_fd_printf(va_arg(args, unsigned int), 1, c));
	else if (c == '%')
		return (ft_putchar_fd_printf('%', 1));
	else
	{
		return (0);
	}
}

int	ft_printf(char const *c, ...)
{
	int			i;
	int			count;
	va_list		args;

	i = 0;
	count = 0;
	va_start(args, c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			count += handle_c(args, c[i + 1]);
			i++;
		}
		else
			count += ft_putchar_fd_printf(c[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
