/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:17:55 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/02 20:55:08 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		cmp;
	size_t				i;

	ptr = (unsigned char *)s;
	cmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == cmp)
		{
			return ((unsigned *)(ptr + i));
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
