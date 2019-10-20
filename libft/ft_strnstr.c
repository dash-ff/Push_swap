/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 13:14:36 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/27 13:25:18 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	if (needle[i] == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		k = 0;
		while (needle[k] == haystack[i + k] && len > i + k)
		{
			if (needle[k + 1] == '\0')
				return ((char*)haystack + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
