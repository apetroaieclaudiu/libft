/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:29:12 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/12 20:29:52 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (n--)
		if (!(*dest++ = *src++))
			return (ret);
	*dest = '\0';
	return (ret);
}
