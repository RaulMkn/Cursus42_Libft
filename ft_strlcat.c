/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:41:51 by rmakende          #+#    #+#             */
/*   Updated: 2024/03/27 20:30:36 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[l] != '\0' && l < size)
		l++;
	j = l;
	while (src[i] != '\0')
		i++;
	if (size == 0 || l >= size)
		return (l + i);
	while (j < (size - 1) && src[j - l] != '\0')
	{
		dest[j] = src[j - l];
		j++;
	}
	dest[j] = '\0';
	return (l + i);
}
