/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:18:52 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:19:04 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_ps *p)
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
}

void	ft_rrr(t_ps *p)
{
	ft_rra(p);
	ft_rrb(p);
}
