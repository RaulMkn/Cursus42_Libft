/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:28:54 by rmakende          #+#    #+#             */
/*   Updated: 2025/05/14 21:06:56 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd_printf(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd_printf(char *s, int fd)
{
	int		i;
	int		j;
	int		result;

	i = 0;
	j = 0;
	if (!s)
		return (ft_putstr_fd_printf("(null)", 1));
	while (s[i] != '\0')
	{
		result = ft_putchar_fd_printf(s[i], fd);
		if (result == -1)
		{
			return (-1);
		}
		j += result;
		i++;
	}
	return (j);
}

static int	ft_putnbr(int nb, int fd)
{
	int		result;
	char	str[10];
	int		i;

	result = 0;
	i = 0;
	if (nb < 0)
	{
		result += ft_putchar_fd_printf('-', fd);
		nb = -nb;
	}
	while (nb != 0)
	{
		str[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		result += ft_putchar_fd_printf(str[--i], fd);
	}
	return (result);
}

int	ft_putnbr_fd_printf(int n, int fd)
{
	if (n == 0)
	{
		return (ft_putchar_fd_printf('0', fd));
	}
	else if (n == 2147483647)
	{
		return (ft_putstr_fd_printf("2147483647", fd));
	}
	else if (n == -2147483648)
	{
		return (ft_putstr_fd_printf("-2147483648", fd));
	}
	else
	{
		return (ft_putnbr(n, fd));
	}
}
