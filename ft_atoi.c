/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capetroa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:56:56 by capetroa          #+#    #+#             */
/*   Updated: 2017/12/13 12:37:36 by capetroa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;
	int		contor;

	i = 0;
	num = 0;
	sign = 1;
	contor = 1;
	while (*(str + i) == '\n' || *(str + i) == '\t' || *(str + i) == '\r' ||
		*(str + i) == '\v' || *(str + i) == '\f' || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9' && contor++)
	{
		num = num * 10 + sign * (*(str + i++) - '0');
	}
	if (contor > 15 && sign == -1)
		return (0);
	else if (contor > 15 && sign == 1)
		return (-1);
	return (num);
}
