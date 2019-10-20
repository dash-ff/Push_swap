/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:18:01 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:18:44 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_ss(t_ps *p)
{
	ft_swap_a(p);
	ft_swap_b(p);
}

void	ft_ra(t_ps *p)
{
	int i;
	int tmp;

	if (LENA == TOPA)
		return ;
	i = TOPA;
	while (i < LENA - 1)
	{
		tmp = p->sta[i + 1];
		p->sta[i + 1] = p->sta[i];
		p->sta[i] = tmp;
		i++;
	}
}

void	ft_rb(t_ps *p)
{
	int i;
	int tmp;

	if (LENB == TOPB)
		return ;
	i = TOPB;
	while (i < LENB - 1)
	{
		tmp = p->stb[i + 1];
		p->stb[i + 1] = p->stb[i];
		p->stb[i] = tmp;
		i++;
	}
}

void	ft_rr(t_ps *p)
{
	ft_ra(p);
	ft_rb(p);
}

void	ft_rra(t_ps *p)
{
	int i;
	int tmp;

	if (LENA == TOPA)
		return ;
	i = LENA - 1;
	while (i > TOPA)
	{
		tmp = p->sta[i];
		p->sta[i] = p->sta[i - 1];
		p->sta[i - 1] = tmp;
		i--;
	}
}
