/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleaner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:26:04 by rmakende          #+#    #+#             */
/*   Updated: 2025/01/15 21:36:15 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cleaner_aux(char *str, char remover)
{
	char	*tmp;
	int		i;
	int		j;

	if (!str || !*str)
		return (NULL);
	tmp = (char *)malloc(ft_strlen(str) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != remover)
			tmp[j++] = str[i];
		i++;
	}
	tmp[j] = '\0';
	free(str);
	return (tmp);
}

char	*ft_cleaner(char *str, char *removers)
{
	int	i;

	if (!str || !*str)
		return (NULL);
	i = 0;
	while (removers[i] != '\0')
	{
		str = ft_cleaner_aux(str, removers[i]);
		if (!str)
			return (NULL);
		i++;
	}
	return (str);
}
