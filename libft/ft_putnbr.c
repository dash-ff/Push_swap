/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:19:44 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/19 12:38:04 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr(int n)
{
	unsigned int x;

	if (n < 0)
	{
		ft_putchar('-');
		x = -n;
	}
	else
		x = n;
	if (x < 10)
		ft_putchar(x + '0');
	else
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + '0');
	}
}
