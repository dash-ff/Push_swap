/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mas.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:43:57 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:44:36 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_create_struct(t_ps *p)
{
	p->len = 0;
	p->topa = 0;
	p->topb = 0;
	p->lena = 0;
	p->lenb = 0;
	p->lenaord = 0;
	p->topaord = 0;
	p->min_ord = 0;
	p->show = 0;
}

void	ft_check_dub(t_ps *p, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		if (p->sta[i] == p->sta[j])
		{
			ft_out("Error");
		}
		i++;
	}
}
