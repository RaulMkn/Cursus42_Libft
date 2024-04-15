/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:18:10 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/06 20:19:45 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*t1;
	const char	*t2;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (dst);
	t1 = (char *)dst;
	t2 = (const char *)src;
	i = 0;
	while (i < n)
	{
		t1[i] = t2[i];
		i++;
	}
	return (dst);
}
