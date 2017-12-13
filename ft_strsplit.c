/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:40:09 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/13 12:19:22 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nr_cuv(const char *s, char c)
{
	int		contor;
	int		este_cuv;

	este_cuv = 0;
	contor = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (este_cuv == 1 && *s == c)
			este_cuv = 0;
		if (este_cuv == 0 && *s != c)
		{
			este_cuv = 1;
			contor++;
		}
		s++;
	}
	return (contor);
}

static int		lungime_cuvant(const char *s, char c)
{
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = nr_cuv((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (nr_cuv((const char *)s, c) + 1));
	if (!s || !c)
		return (NULL);
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub((const char *)s, 0,
				lungime_cuvant((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + lungime_cuvant(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
