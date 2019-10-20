/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:06:51 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/27 20:07:53 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int k;

	k = 0;
	while (s1[k] && s2[k] && s1[k] == s2[k])
		k++;
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
