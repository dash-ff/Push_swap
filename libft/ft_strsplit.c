/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:45:12 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 17:24:23 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_findwords(const char *s, char c)
{
	size_t nb;

	nb = 0;
	while (*s)
	{
		if (*s != c)
			nb++;
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (nb);
}

static size_t	ft_newwords(const char *s, char c, size_t i)
{
	size_t	n;

	n = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		n++;
	}
	return (n);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**book;
	size_t	nbw;
	size_t	r;
	size_t	i;

	i = 0;
	r = 0;
	if (s == NULL)
		return (NULL);
	nbw = ft_findwords(s, c);
	if (!(book = (char**)malloc(sizeof(char*) * (nbw + 1))))
		return (NULL);
	while (r < nbw && s[i] != '\0')
	{
		if (s[i] != c)
		{
			book[r] = ft_strnew(ft_newwords(s, c, i));
			book[r] = ft_strncpy(book[r], s + i, ft_newwords(s, c, i));
			i = i + ft_newwords(s, c, i);
			r++;
		}
		i++;
	}
	book[r] = NULL;
	return (book);
}
