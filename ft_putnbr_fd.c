/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:43:11 by rmakende          #+#    #+#             */
/*   Updated: 2024/09/17 17:14:41 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, int fd)
{
	int		alt;
	int		i;
	char	str[1];

	alt = 0;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		alt = (alt * 10) + (nb % 10);
		nb /= 10;
		i++;
	}
	while (i != 0)
	{
		*str = (alt % 10 + '0');
		write(fd, &str, 1);
		alt /= 10;
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
		ft_putnbr(n, fd);
}
