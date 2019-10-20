/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:13:35 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/02 21:43:25 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dstl;
	size_t srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl < size)
	{
		i = 0;
		size = size - dstl - 1;
		while (src[i] != '\0' && i < size)
		{
			dst[dstl + i] = src[i];
			i++;
		}
		dst[dstl + i] = '\0';
		return (dstl + srcl);
	}
	return (srcl + size);
}
