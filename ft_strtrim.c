/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:02:07 by marvin            #+#    #+#             */
/*   Updated: 2024/03/31 19:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len_s1;
	size_t		len_set;
	const char	*first;
	const char	*last;
	char		*total;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	first = s1;
	last = s1 + len_s1 - 1;
	while (first <= last && is_in_set(*first, set))
		first++;
	while (last >= first && is_in_set(*last, set))
		last--;
	total = ft_substr(first, 0, last - first + 1);
	return (total);
}
