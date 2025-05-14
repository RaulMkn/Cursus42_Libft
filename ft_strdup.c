/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:53:28 by rmakende          #+#    #+#             */
/*   Updated: 2024/12/03 21:53:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
