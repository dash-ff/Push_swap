/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:18:06 by brickon-          #+#    #+#             */
/*   Updated: 2019/04/21 18:15:12 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	k;

	i = 0;
	if (needle[i] == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		k = 0;
		while (needle[k] == haystack[i + k])
		{
			if (needle[k + 1] == '\0')
				return ((char*)haystack + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
