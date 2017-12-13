/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:32:14 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/13 13:42:41 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (!n)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (s1 && s2 && n)
	{
		i = 0;
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
			n--;
		}
		return (1);
	}
	return (0);
}
