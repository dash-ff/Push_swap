/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 22:13:29 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 14:42:20 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	char	*t;
	char	*tmp;

	t = (char*)s;
	d = (char)c;
	tmp = NULL;
	while (*t)
	{
		if (*t == d)
			tmp = t;
		t++;
	}
	if (*t == d)
		return (t);
	return (tmp);
}
