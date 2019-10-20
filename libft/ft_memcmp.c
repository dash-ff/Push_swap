/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:29:34 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 14:27:22 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*s11 == *s22)
		{
			s11++;
			s22++;
			n--;
		}
		else
			return (*s11 - *s22);
	}
	return (0);
}
