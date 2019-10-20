/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 15:06:47 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/19 15:11:08 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t k;
	size_t l;

	k = ft_strlen(s1) + ft_strlen(s2);
	l = ft_strlen(s1);
	i = 0;
	while (l < k && i < n)
	{
		s1[l] = s2[i];
		i++;
		l++;
	}
	s1[l] = '\0';
	return (s1);
}
