/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:19:38 by brickon-          #+#    #+#             */
/*   Updated: 2019/10/16 14:28:05 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_a_elem(int a)
{
	write(1, "\033[0;32m", 7);
	ft_putstr("\t[");
	ft_putnbr(a);
	ft_putstr("]");
}

void	ft_put_b_elem(int b)
{
	ft_putstr("\t\t[");
	ft_putnbr(b);
	ft_putstr("]\n");
}

void	ft_show(t_ps *p)
{
	int i;
	int j;

	i = 0;
	j = 0;
	usleep(110000);
	system("clear");
	ft_putstr("\t A \t\t B\n");
	while (i < LENA || j < LENB)
	{
		if (i >= TOPA && i < LENA)
			ft_put_a_elem(STA[i]);
		else
			ft_putstr("\t[ ]");
		if (j >= TOPB && j < LENB)
			ft_put_b_elem(STB[j]);
		else
			ft_putstr("\t\t[ ]\n");
		i++;
		j++;
	}
}

void	ft_focus(char **av, int ac, t_ps *p)
{
	char *line;

	line = NULL;
	if (!(ft_strcmp(av[1], "-v")))
	{
		ft_check_args(p, av + 1, ac - 1);
		p->show = 1;
	}
	else
		ft_check_args(p, av, ac);
	if (p->show)
		ft_show(p);
	while (get_next_line(0, &line) > 0)
	{
		ft_read_commands(line, p);
		free(line);
		if (p->show)
			ft_show(p);
	}
}

int		main(int ac, char **av)
{
	int		i;
	t_ps	p;

	i = 0;
	if (ac < 2)
		exit(0);
	ft_focus(av, ac, &p);
	ft_check_stack(&p);
	exit(0);
}
