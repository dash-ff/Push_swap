/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 21:02:37 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 19:40:05 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;
	char	*t;

	t = (char*)s;
	d = (char)c;
	while (*t)
	{
		if (*t == d)
			return (t);
		t++;
	}
	return (NULL);
}
