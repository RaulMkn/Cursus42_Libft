/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:58:16 by rmakende          #+#    #+#             */
/*   Updated: 2024/12/20 15:50:55 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t		i;
	size_t		j;
	int			found;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			break ;
		i++;
	}
	return (i);
}
