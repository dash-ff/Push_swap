/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:58:29 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/24 22:58:33 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ps_ra(t_ps *p)
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
	write(1, "ra\n", 3);
}

void	ft_ps_rb(t_ps *p)
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
	write(1, "rb\n", 3);
}

void	ft_ps_rr(t_ps *p)
{
	ft_ra(p);
	ft_rb(p);
	write(1, "rr\n", 3);
}
