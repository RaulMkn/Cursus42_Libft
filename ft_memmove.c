/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:18:16 by rmakende          #+#    #+#             */
/*   Updated: 2024/03/27 18:57:35 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*t1;
	const char	*t2;
	size_t		i;

	t1 = (char *)dst;
	t2 = (const char *)src;
	if (t1 < t2)
	{
		i = 0;
		while (i < len)
		{
			t1[i] = t2[i];
			i++;
		}
	}
	else if (t1 > t2)
	{
		while (len > 0)
		{
			t1[len - 1] = t2[len - 1];
			len--;
		}
	}
	return (dst);
}
