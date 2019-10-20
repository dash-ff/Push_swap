/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:17:35 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/09 18:21:14 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isalpha(int c)
{
	unsigned int d;

	d = (unsigned int)c;
	if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
		return (1);
	else
		return (0);
}