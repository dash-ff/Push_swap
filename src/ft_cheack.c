/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:22:29 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 11:23:40 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_count_num(t_ps *p, char *s)
{
	while (*s)
	{
		if (ft_strchr("1234567890-+", *s) && *s)
		{
			p->len++;
			s = s + ft_intlen(ft_atoi(s));
		}
		else
			s++;
	}
}

void	ft_check_num(char *s)
{
	if (*s == '\0')
		ft_out("Error");
	while (*s)
	{
		if (!(ft_strchr(" ,-+1234567890", *s)))
			ft_out("Error");
		if (*s == '-' && (!(ft_strchr("123456789", *(s + 1)))))
			ft_out("Error");
		if (*s == '+' && (!(ft_strchr("123456789", *(s + 1)))))
			ft_out("Error");
		s++;
	}
}

void	ft_write_mas(t_ps *p, char *s)
{
	while (*s)
	{
		if (ft_strchr("1234567890-+", *s) && *s)
		{
			p->sta[p->lena] = ft_atoi(s);
			if (ft_atol(s) != (long)p->sta[p->lena])
			{
				ft_out("Error");
			}
			s = s + ft_intlen(p->sta[p->lena]);
			ft_check_dub(p, p->lena);
			p->lena++;
		}
		else
			s++;
	}
}

void	ft_check_args(t_ps *p, char **av, int ac)
{
	int i;

	i = 1;
	ft_create_struct(p);
	while (i < ac)
		ft_check_num(av[i++]);
	i = 1;
	while (i < ac)
		ft_count_num(p, av[i++]);
	if (!(p->sta = (int *)malloc(sizeof(int) * (p->len))))
		ft_out("Error");
	if (!(p->stb = (int *)malloc(sizeof(int) * (p->len))))
		ft_out("Error");
	ft_bzero(p->stb, (p->len * 4));
	ft_bzero(p->sta, (p->len * 4));
	i = 1;
	while (i < ac)
		ft_write_mas(p, av[i++]);
	TOPB = LENA;
	LENB = LENA;
}
