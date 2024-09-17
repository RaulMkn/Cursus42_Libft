/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:17:12 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 19:26:32 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	j;

	ptr = (char *)s;
	j = 0;
	while (j < n)
		ptr[j++] = 0;
}

/*
int main() {
    char buffer[10] = "abcdefghi";

    printf("Buffer antes de bzero: %s\n", buffer);

    ft_bzero(buffer, sizeof(buffer));

    printf("Buffer después de bzero: %s\n", buffer);

    return 0;
}
*/