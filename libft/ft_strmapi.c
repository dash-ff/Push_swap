/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 17:08:15 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/27 18:15:09 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (*s && s != NULL)
	{
		str[i] = f(i, (char)*s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
