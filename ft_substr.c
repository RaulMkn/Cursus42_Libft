/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:19:44 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/15 15:19:14 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	i = 0;
	while (i < start && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (len > s_len - i)
		len = s_len - i;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, s + i, len);
	sub[len] = '\0';
	return (sub);
}
