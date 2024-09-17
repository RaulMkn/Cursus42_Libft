/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:08:25 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 20:59:18 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\v')
			i++;
		else if (str[i] == '\n' || str[i] == '\f')
			i++;
		else if (str[i] == '\t' || str[i] == '\r')
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sum;
	int	mult;
	int	j;

	i = check_spaces(str);
	sum = 0;
	mult = 1;
	j = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
		j++;
	}
	if (j >= 2)
		mult = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * mult);
}
/*
int main(void)
{
	char *str = "-236543";
	char *str2 = "-2147483648";

	int n1 = ft_atoi(str);
	int n2 = ft_atoi(str2);

	printf("Resultado: %i\nResultado2: %i", n1, n2);
}
*/