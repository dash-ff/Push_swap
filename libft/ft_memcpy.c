/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 14:56:31 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/09 18:25:27 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
