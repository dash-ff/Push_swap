/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 18:27:25 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/09 20:58:27 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (s1[i + 1] != s2[i + 1])
			return (0);
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	else
		return (1);
}
