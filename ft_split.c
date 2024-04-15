/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:38:07 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/12 10:38:07 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**asign_memory(char const *s, char c)
{
	char	**str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			k++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	str = (char **)malloc((k + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (str);
}

static void	*free_memory(char **str, int k)
{
	while (k >= 0)
	{
		free(str[k]);
		k--;
	}
	free(str);
	return (NULL);
}

static int	asign_j(const char *s, char c, int i)
{
	int	j;

	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	return (j);
}

static char	**true_split(char **str, char const *s, char c, int i)
{
	int	k;
	int	j;
	int	l;

	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			j = asign_j(s, c, i);
			str[k] = (char *)malloc((j - i + 1) * sizeof(char));
			if (!str[k])
				return (free_memory(str, k));
			l = 0;
			while (i < j)
				str[k][l++] = s[i++];
			str[k++][l] = '\0';
		}
	}
	str[k] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	str = asign_memory(s, c);
	if (!str)
		return (NULL);
	str = true_split(str, s, c, i);
	return (str);
}
