/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:51:03 by brickon-          #+#    #+#             */
/*   Updated: 2019/01/19 12:40:22 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int x;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = -n;
	}
	else
		x = n;
	if (x < 10)
		ft_putchar_fd(x + '0', fd);
	else
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd(x % 10 + '0', fd);
	}
}
