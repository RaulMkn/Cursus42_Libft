/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:13:09 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 19:37:00 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*
int main(void)
{
	int c = ' ';
	int res = ft_isalnum(c);
    printf(", Resultado: %d", res);
	return 0;
}
*/