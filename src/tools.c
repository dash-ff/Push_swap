/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:20:23 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 12:21:56 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_stack(t_ps *p)
{
	int flag;
	int i;

	i = TOPA;
	flag = 0;
	if (TOPA != 0)
		ft_out("KO");
	while (i < LENA - 1)
	{
		if (p->sta[i] > p->sta[i + 1])
			ft_out("KO");
		i++;
	}
	ft_out("OK");
}

long	ft_atol(const char *str)
{
	long long int	itg;
	int				zn;

	itg = 0;
	zn = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		zn = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (itg > itg * 10 + (*str - 48))
			return (zn == 1 ? -1 : 0);
		itg = itg * 10 + *str - 48;
		str++;
	}
	return ((long)itg * zn);
}

int		ft_putstr_ret(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}

void	ft_out(char *str)
{
	ft_putendl(str);
	exit(0);
}
