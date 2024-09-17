/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:09:57 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/03 17:09:57 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*asign_memory(int n)
{
	int		size;
	char	*str;
	int		alt;

	alt = n;
	if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		return (str);
	}
	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	if (alt < 0)
		str = (char *)malloc((size + 2) * sizeof(char));
	else
		str = (char *)malloc((size + 1) * sizeof(char));
	return (str);
}

static int	turn_num(int n, char *str)
{
	int	digit;
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (n < 0)
	{
		str[j] = '-';
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		digit = n % 10;
		str[i++] = digit + '0';
		n /= 10;
	}
	if (i == 0)
		str[i++] = '0';
	return (i);
}

static char	*min_int(void)
{
	char	*str;

	str = (char *)malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*reverse_str(char *str, int i, int alt)
{
	int		j;
	char	temp;

	j = 0;
	while (j < i / 2)
	{
		if (alt < 0)
		{
			temp = str[j + 1];
			str[j + 1] = str[i - j - 1];
		}
		else
		{
			temp = str[j];
			str[j] = str[i - j - 1];
		}
		str[i - j - 1] = temp;
		j++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		alt;

	if (n == -2147483648)
	{
		str = min_int();
		return (str);
	}
	alt = n;
	str = asign_memory(n);
	if (!str)
		return (NULL);
	i = turn_num(n, str);
	str = reverse_str(str, i, alt);
	str[i] = '\0';
	return (str);
}

/*
int main() {
    int num1 = 12345;
    int num2 = -2147483648;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Número: %d, Cadena: %s\n", num1, str1);
    printf("Número: %d, Cadena: %s\n", num2, str2);
    printf("Número: %d, Cadena: %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}
*/