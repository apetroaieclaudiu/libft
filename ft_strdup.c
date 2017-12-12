/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:20:42 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:21:42 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*p;
	char	*q;

	str = (char*)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	p = str;
	q = (char*)s;
	while (*q)
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	return (str);
}
