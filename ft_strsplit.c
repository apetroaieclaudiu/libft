/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:40:09 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 21:24:15 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	contor;

	i = 0;
	contor = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			contor++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		i++;
	}
	return (contor);
}

void		next_cuv(char const *s, int *i, char c)
{
	while (s[*i] && s[*i] == c)
	{
		*i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char	**str;
	char	*cuv;

	i = 0;
	k = 0;
	str = (char**)malloc(sizeof(char*) * count_words(s,c));
	if (!str)
		return (NULL);
	while (s[i])
	{
		next_cuv(&s[i], &i, c);
		j = i;
		i = ft_strchr(s,c) - &s[i];
		cuv = ft_strnew(i - j + 1);
		ft_strncpy(cuv, &s[j], i - j);
		cuv[i-j] = '\0';
		str[k] = &cuv;
		k++;
	}
	return (str);
}
