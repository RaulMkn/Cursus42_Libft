/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:43:37 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/02 20:21:15 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	char	c2;

	if (!(c >= 'a' && c <= 'z'))
		return (c);
	else
		c = c - 32;
	c2 = c;
	return (c2);
}