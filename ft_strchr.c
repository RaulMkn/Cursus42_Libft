/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:18:24 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/08 18:58:16 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	int				size;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char )c;
	size = ft_strlen(s);
	while (i < size +1)
	{
		if ((unsigned char)s[i] == c2)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
