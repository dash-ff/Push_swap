/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_commands2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:59:43 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/24 22:59:46 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ps_push_a(t_ps *p)
{
	int i;

	i = -1;
	if (TOPB == LENB || TOPA == 0)
		return ;
	else
		p->sta[--TOPA] = p->stb[TOPB++];
	write(1, "pa\n", 3);
}

void	ft_ps_push_b(t_ps *p)
{
	if (TOPA == LENA || TOPB == 0)
		return ;
	else
		p->stb[--TOPB] = p->sta[TOPA++];
	write(1, "pb\n", 3);
}

void	ft_ps_swap_a(t_ps *p)
{
	int tmp;

	if (LENA == TOPA)
		return ;
	tmp = p->sta[TOPA];
	p->sta[TOPA] = p->sta[TOPA + 1];
	p->sta[TOPA + 1] = tmp;
	write(1, "sa\n", 3);
}

void	ft_ps_swap_b(t_ps *p)
{
	int tmp;

	if (LENB == TOPB)
		return ;
	tmp = p->stb[TOPB];
	p->stb[TOPB] = p->stb[TOPB + 1];
	p->stb[TOPB + 1] = tmp;
	write(1, "sb\n", 3);
}

void	ft_ps_swap_ss(t_ps *p)
{
	ft_ps_swap_a(p);
	ft_ps_swap_b(p);
}
