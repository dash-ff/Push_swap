/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_market.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:36:51 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 19:35:53 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_create_price(t_price *price)
{
	price->index = -1;
	price->price_min = 2147483647;
	price->ra = 2147483647;
	price->rb = 2147483647;
	price->rr = 2147483647;
	price->rra = 2147483647;
	price->rrb = 2147483647;
	price->rrr = 2147483647;
	price->sol = -1;
}

int		ft_get_best_price(t_ps *p, t_price *price, int i, int j)
{
	int ra;
	int rb;

	ra = i;
	rb = j;
	if (MIN_PRICE > ft_return_max(ra, rb) ||
			MIN_PRICE > ft_return_max(LENA - i - TOPA, LENB - j - TOPB) ||
			MIN_PRICE > (ra + LENB - j - TOPB) ||
			MIN_PRICE > (rb + LENA - i - TOPA) || price->index == -1)
	{
		price->ra = i;
		price->rb = j;
		price->rr = ft_return_min(RA, RB);
		price->rra = LENA - i - TOPA;
		price->rrb = LENB - j - TOPB;
		price->rrr = ft_return_min(RRA, RRB);
		price->index = j;
		return (1);
	}
	return (0);
}

void	ft_calc_price(t_ps *p, t_price *price, int i, int j)
{
	if (!(ft_get_best_price(p, price, i, j)))
		return ;
	if (MIN_PRICE > RRA + RB)
	{
		SOL = 3;
		MIN_PRICE = RRA + RB;
	}
	if (MIN_PRICE > RA + RRB)
	{
		SOL = 4;
		MIN_PRICE = RA + RRB;
	}
	if (MIN_PRICE >= ft_return_max(RA, RB))
	{
		SOL = 1;
		MIN_PRICE = ft_return_max(RA, RB);
		RR = ft_return_max(RA, RB);
	}
	if (MIN_PRICE > ft_return_max(RRA, RRB))
	{
		SOL = 2;
		MIN_PRICE = ft_return_max(RRA, RRB);
		RRR = ft_return_min(RRA, RRB);
	}
	price->index = j;
}

void	ft_best_price(t_ps *p)
{
	t_price	price;
	int		i;
	int		j;

	i = TOPA - 1;
	ft_create_price(&price);
	while (++i < p->len)
	{
		j = TOPB;
		while (j < p->len)
		{
			if (STB[TOPB] < STA[TOPA] && STB[TOPB] > STA[LENA - 1])
				ft_calc_price(p, &price, 0, j - TOPB);
			if (STB[j] > STA[i] && STB[j] < STA[i + 1])
				ft_calc_price(p, &price, i - TOPA + 1, j - TOPB);
			j++;
		}
	}
	ft_do_w_price(&price, p);
}

void	ft_new_sort(t_ps *ps)
{
	int i;

	i = 0;
	ps->lenaord = ps->len;
	if (!(ps->staord = (int *)malloc(sizeof(int) * (ps->lenaord))))
		ft_out("Error");
	ft_bzero(ps->staord, (ps->lenaord * 4));
	ft_bzero(ps->stb, (ps->lenb * 4));
	while (i < ps->lenaord)
	{
		ps->staord[i] = ps->sta[i];
		i++;
	}
	ft_write_ords(ps);
	ft_find_ords(ps);
	ft_min_max_mid_ord(ps);
	ft_push_b_minus3(ps);
	ft_sort_three_elem(ps);
	while (ps->topa > 0)
	{
		ft_best_price(ps);
		ft_ps_push_a(ps);
	}
	ft_dokrut(ps);
}
