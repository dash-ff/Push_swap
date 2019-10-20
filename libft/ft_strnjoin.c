/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:28:26 by brickon-          #+#    #+#             */
/*   Updated: 2019/04/21 18:31:18 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	k;
	char			*str;

	k = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (n > ft_strlen(s2))
		str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	else
		str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + n + 1));
	if (str == NULL)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2 && k < n)
	{
		str[i++] = *s2++;
		k++;
	}
	str[i] = '\0';
	return (str);
}
