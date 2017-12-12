/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:03:07 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:03:13 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char *d;

	d = (char *)ptr;
	if (num)
	{
		*d++ = value;
		while (--num)
		{
			*d++ = value;
		}
	}
	return (ptr);
}
