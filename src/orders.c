/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:45:08 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:52:04 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_ords(t_ps *ps)
{
	int i;
	int j;

	i = -1;
	while (++i < ps->lenaord)
	{
		j = -1;
		while (++j < ps->lenaord)
		{
			if (ps->sta[i] == ps->staord[j])
			{
				ps->sta[i] = j + 1;
				break ;
			}
		}
	}
}

void	ft_min_max_mid_ord(t_ps *ps)
{
	ps->min_ord = 1;
	ps->max_ord = ps->len;
	ps->midle_ord = ps->len / 2;
	ps->ekvator = ps->midle_ord;
}

void	ft_sort_three_elem(t_ps *ps)
{
	if (ps->sta[ps->topa] == ps->max_ord)
	{
		ft_ps_ra(ps);
		if (ps->sta[ps->topa] != ps->min_ord)
			ft_ps_swap_a(ps);
	}
	else if (ps->sta[ps->topa] != ps->max_ord &&
			ps->sta[ps->topa] != ps->min_ord)
	{
		if (ps->sta[ps->lena - 1] == ps->max_ord)
			ft_ps_swap_a(ps);
		else
			ft_ps_rra(ps);
	}
	else if (ps->sta[ps->topa] == ps->min_ord &&
			ps->sta[ps->lena - 1] != ps->max_ord)
		ft_ps_swap_a(ps);
}

void	ft_write_ords(t_ps *ps)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < ps->lenaord - 1)
	{
		if (ps->staord[i] > ps->staord[i + 1])
		{
			tmp = ps->staord[i];
			ps->staord[i] = ps->staord[i + 1];
			ps->staord[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
