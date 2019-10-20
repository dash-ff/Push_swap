/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:00:45 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:52:52 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b_minus3(t_ps *p)
{
	int		i;
	int		steps;

	i = p->max_ord - 1;
	while (p->lena - p->topa > 3)
	{
		if (i == p->midle_ord)
			p->midle_ord = p->midle_ord / 2;
		if (STA[TOPA] != 1 && STA[TOPA] != p->max_ord &&
				STA[TOPA] >= p->midle_ord && STA[TOPA] != p->ekvator)
		{
			ft_ps_push_b(p);
			i--;
		}
		else
		{
			steps = ft_best_4push(p);
			if (steps > 0)
				while (steps--)
					ft_ps_ra(p);
			else
				while (steps++)
					ft_ps_rra(p);
		}
	}
}

int		main(int ac, char **av)
{
	t_ps	ps;
	int		i;
	char	*line;

	line = NULL;
	i = 1;
	if (ac < 2)
		exit(0);
	ft_check_args(&ps, av, ac);
	if (!(ft_check_ps(&ps)))
		exit(0);
	else
		ft_new_sort(&ps);
	exit(0);
}
