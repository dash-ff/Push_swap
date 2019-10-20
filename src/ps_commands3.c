/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_commands3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:00:03 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/24 23:00:33 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ps_rra(t_ps *p)
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
	write(1, "rra\n", 4);
}

void	ft_ps_rrb(t_ps *p)
{
	int i;
	int tmp;

	if (LENB == TOPB)
		return ;
	i = LENB - 1;
	while (i > TOPB)
	{
		tmp = p->stb[i - 1];
		p->stb[i - 1] = p->stb[i];
		p->stb[i] = tmp;
		i--;
	}
	write(1, "rrb\n", 4);
}

void	ft_ps_rrr(t_ps *p)
{
	ft_rra(p);
	ft_rrb(p);
	write(1, "rrr\n", 4);
}
