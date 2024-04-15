/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:18:20 by rmakende          #+#    #+#             */
/*   Updated: 2024/03/27 20:31:58 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	str;
	size_t			i;

	ptr = (unsigned char *)b;
	str = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = str;
		i++;
	}
	return (b);
}
