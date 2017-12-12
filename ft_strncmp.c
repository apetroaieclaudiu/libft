/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:30:07 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:30:40 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char*)s1;
	q = (unsigned char*)s2;
	while (*q && *p && *p == *q && n)
	{
		p++;
		q++;
		n--;
	}
	return (*p - *q);
}
