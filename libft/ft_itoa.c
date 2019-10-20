/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 14:23:11 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 17:28:15 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		x;

	x = (ft_intlen(n));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char*)malloc(sizeof(char) * (x + 1));
	if (str == NULL)
		return (NULL);
	str[x] = '\0';
	x = x - 1;
	if (n < 0)
		str[0] = '-';
	n = (n < 0) ? -n : n;
	while (n >= 10 && x >= 0)
	{
		str[x] = n % 10 + '0';
		n = n / 10;
		x--;
	}
	if (n < 10)
		str[x] = n + '0';
	return (str);
}
