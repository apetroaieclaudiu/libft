/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:17:49 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:18:52 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char*)s1;
	q = (unsigned char*)s2;
	while (*q && *p && *p == *q)
	{
		p++;
		q++;
	}
	return (*p - *q);
}
