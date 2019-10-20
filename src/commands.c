/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:06:58 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:17:53 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_read_commands(char *line, t_ps *p)
{
	if ((!(ft_strcmp(line, "sa"))))
		ft_swap_a(p);
	else if (!(ft_strcmp(line, "sb")))
		ft_swap_b(p);
	else if (!(ft_strcmp(line, "ss")))
		ft_swap_ss(p);
	else if (!(ft_strcmp(line, "pa")))
		ft_push_a(p);
	else if (!(ft_strcmp(line, "pb")))
		ft_push_b(p);
	else if (!(ft_strcmp(line, "ra")))
		ft_ra(p);
	else if (!(ft_strcmp(line, "rb")))
		ft_rb(p);
	else if (!(ft_strcmp(line, "rr")))
		ft_rr(p);
	else if (!(ft_strcmp(line, "rra")))
		ft_rra(p);
	else if (!(ft_strcmp(line, "rrb")))
		ft_rrb(p);
	else if (!(ft_strcmp(line, "rrr")))
		ft_rrr(p);
	else
		ft_out("Error\n");
}

void	ft_push_a(t_ps *p)
{
	if (TOPB == LENB || TOPA == 0)
		return ;
	else
		p->sta[--TOPA] = p->stb[TOPB++];
}

void	ft_push_b(t_ps *p)
{
	if (TOPA == LENA || TOPB == 0)
		return ;
	else
		p->stb[--TOPB] = p->sta[TOPA++];
}

void	ft_swap_a(t_ps *p)
{
	int tmp;

	if (LENA == TOPA)
		return ;
	tmp = p->sta[TOPA];
	p->sta[TOPA] = p->sta[TOPA + 1];
	p->sta[TOPA + 1] = tmp;
}

void	ft_swap_b(t_ps *p)
{
	int tmp;

	if (LENB == TOPB)
		return ;
	tmp = p->stb[TOPB];
	p->stb[TOPB] = p->stb[TOPB + 1];
	p->stb[TOPB + 1] = tmp;
}
