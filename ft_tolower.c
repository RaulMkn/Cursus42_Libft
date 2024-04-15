/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:43:37 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/02 20:21:23 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	c2;

	if (!(c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	else
	{
		c = c + 32;
	}
	c2 = c;
	return (c2);
}
