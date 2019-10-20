/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_price.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:25:06 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:33:19 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sol_1(t_ps *ps, int ra, int rb)
{
	int	rr;

	rr = ft_return_min(ra, rb);
	ra = ra - rr;
	rb = rb - rr;
	while (ra)
	{
		ft_ps_ra(ps);
		ra--;
	}
	while (rb)
	{
		ft_ps_rb(ps);
		rb--;
	}
	while (rr)
	{
		ft_ps_rr(ps);
		rr--;
	}
}

void	ft_sol_2(t_ps *ps, int rra, int rrb)
{
	int rrr;

	rrr = ft_return_min(rra, rrb);
	rra = rra - rrr;
	rrb = rrb - rrr;
	while (rra--)
		ft_ps_rra(ps);
	while (rrb--)
		ft_ps_rrb(ps);
	while (rrr--)
		ft_ps_rrr(ps);
}

void	ft_sol_3(t_ps *ps, int rra, int rb)
{
	while (rra)
	{
		ft_ps_rra(ps);
		rra--;
	}
	while (rb)
	{
		ft_ps_rb(ps);
		rb--;
	}
}

void	ft_sol_4(t_ps *ps, int ra, int rrb)
{
	while (ra)
	{
		ft_ps_ra(ps);
		ra--;
	}
	while (rrb)
	{
		ft_ps_rrb(ps);
		rrb--;
	}
}

void	ft_do_w_price(t_price *price, t_ps *ps)
{
	if (price->sol == 1)
		ft_sol_1(ps, price->ra, price->rb);
	else if (price->sol == 2)
		ft_sol_2(ps, price->rra, price->rrb);
	else if (price->sol == 3)
		ft_sol_3(ps, price->rra, price->rb);
	else if (price->sol == 4)
		ft_sol_4(ps, price->ra, price->rrb);
	else
		return ;
}
