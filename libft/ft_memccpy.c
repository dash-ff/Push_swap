/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 15:36:14 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/20 17:05:18 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcc;

	dest = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		if (dest[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
