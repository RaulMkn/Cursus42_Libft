/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:53:28 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/02 19:10:31 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *str)
{
	const char	*duplicate;
	size_t		size;

	size = ft_strlen(str) + 1;
	duplicate = (char *)malloc(size * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	return (ft_strcpy((char *)duplicate, str));
}
