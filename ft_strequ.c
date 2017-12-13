/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:22:10 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/13 12:07:52 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*p;
	char	*q;

	p = (char*)s1;
	q = (char*)s2;
	if (!s1 || !s2)
		return (0);
	while (*p && *q && *p == *q)
	{
		p++;
		q++;
	}
	if (*p == '\0' && *q == '\0')
		return (1);
	return (0);
}
