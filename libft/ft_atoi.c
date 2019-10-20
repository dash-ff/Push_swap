/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:11:35 by brickon-          #+#    #+#             */
/*   Updated: 2019/04/21 18:17:48 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(const char *str)
{
	long			itg;
	int				zn;

	itg = 0;
	zn = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		zn = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (itg > itg * 10 + (*str - 48))
			return (zn == 1 ? -1 : 0);
		itg = itg * 10 + *str - 48;
		str++;
	}
	return ((int)itg * zn);
}
