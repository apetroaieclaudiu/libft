/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:24:06 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/13 12:11:04 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*start;

	if (!s1 || !s2)
		return (NULL);
	p = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	if (!p)
		return (NULL);
	start = p;
	ft_strcat(p, s1);
	ft_strcat(p, s2);
	return (start);
}
