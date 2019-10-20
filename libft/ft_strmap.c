/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 16:55:09 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 17:06:58 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
