/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:19:17 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/18 16:08:03 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				k;
	int				size;
	unsigned char	c2;

	i = 0;
	k = -1;
	size = ft_strlen(s);
	c2 = (unsigned char)c;
	while (i < size + 1)
	{
		if ((unsigned char)s[i] == c2)
			k = i;
		i++;
	}
	if (k != -1)
	{
		return ((char *)&s[k]);
	}
	return (NULL);
}
