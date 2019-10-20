/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:23:05 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 19:24:57 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_best_4push(t_ps *ps)
{
	int i;
	int steps;

	steps = 1;
	i = ps->topa;
	while (ps->sta[i] < ps->midle_ord && ps->sta[i] == 1 &&
			ps->sta[i] == ps->max_ord && ps->sta[i] == ps->ekvator)
	{
		steps++;
		i++;
	}
	if (steps <= ps->lena / 2)
		return (steps);
	else
		return (-steps - 1);
}

int		ft_return_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		ft_return_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

void	ft_dokrut(t_ps *ps)
{
	int i;

	i = 0;
	while (i < ps->len && ps->sta[i] != ps->min_ord)
		i++;
	if (i <= ps->len / 2)
	{
		while (i-- && ps->sta[0] != 1)
			ft_ps_ra(ps);
	}
	else
	{
		i = -i - 1;
		while (i++ && ps->sta[0] != 1)
			ft_ps_rra(ps);
	}
}

int		ft_check_ps(t_ps *ps)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i < ps->lena - 1)
	{
		if (ps->sta[i + 1] < ps->sta[i])
			flag++;
		i++;
	}
	return (flag);
}
