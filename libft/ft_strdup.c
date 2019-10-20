/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:01:57 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/27 18:15:45 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		k;
	char	*s2;

	i = 0;
	k = 0;
	if (s1[i] != '\0')
		while (s1[i] != '\0')
			i++;
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
