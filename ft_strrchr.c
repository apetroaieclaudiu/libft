/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:39:19 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:39:53 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*aux;

	p = (char *)s;
	aux = NULL;
	while (*p)
	{
		if (*p == c)
			aux = p;
		p++;
	}
	if (c == '\0')
		return (p);
	return (aux);
}
