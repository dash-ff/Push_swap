/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 13:48:54 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/03 15:47:11 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t		i;
	size_t		k;
	char		*s2;

	i = 0;
	k = 0;
	if (s1[i] != '\0')
		while (s1[i] != '\0')
			i++;
	if (i > n)
		i = n;
	s2 = (char*)malloc(sizeof(*s2) * i + 1);
	if (s2 == NULL)
		return (NULL);
	while (k < i)
	{
		s2[k] = s1[k];
		k++;
	}
	s2[k] = '\0';
	return (s2);
}
