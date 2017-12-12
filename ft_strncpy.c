/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:30:55 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:32:02 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	char	*save;

	save = dest;
	while (*src && size)
	{
		*dest++ = *src++;
		size--;
	}
	while (size)
	{
		*dest++ = '\0';
		size--;
	}
	return (save);
}
