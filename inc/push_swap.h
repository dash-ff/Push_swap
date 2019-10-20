/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:43:51 by brickon-          #+#    #+#             */
/*   Updated: 2019/09/25 20:04:20 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# define BUFF_SIZE 1
# define LENA p->lena
# define LENB p->lenb
# define TOPA p->topa
# define TOPB p->topb
# define STA p->sta
# define STB p->stb
# define RA price->ra
# define RB price->rb
# define RR price->rr
# define RRA price->rra
# define RRB price->rrb
# define RRR price->rrr
# define MIN_PRICE price->price_min
# define SOL price->sol

typedef struct	s_price
{
	int			index;
	int			price_min;
	int			ra;
	int			rra;
	int			rb;
	int			rrb;
	int			rr;
	int			rrr;
	int			sol;
}				t_price;

typedef struct	s_ps
{
	int			*staord;
	int			topaord;
	int			lenaord;
	int			*sta;
	int			*stb;
	int			len;
	int			topa;
	int			topb;
	int			lena;
	int			lenb;
	int			ekvator;
	int			midle_ord;
	int			min_ord;
	int			max_ord;
	int			show;
}				t_ps;

void			ft_out(char *str);
long			ft_atol(const char *str);

/*
**push-swap
*/

void			ft_push_b_minus3(t_ps *ps);

/*
**sorting
*/

int				ft_return_max(int a, int b);
int				ft_return_min(int a, int b);
int				ft_best_4push(t_ps *ps);
void			ft_dokrut(t_ps *ps);
int				ft_check_ps(t_ps *ps);

/*
**orders
*/

void			ft_find_ords(t_ps *ps);
void			ft_min_max_mid_ord(t_ps *ps);
void			ft_write_ords(t_ps *ps);
void			ft_sort_three_elem(t_ps *ps);

/*
**market
*/

void			ft_calc_price(t_ps *p, t_price *price, int i, int j);
int				ft_get_best_price(t_ps *p, t_price *price, int i, int j);
void			ft_best_price(t_ps *p);
void			ft_create_price(t_price *price);
void			ft_new_sort(t_ps *ps);

/*
**price
*/

void			ft_do_w_price(t_price *price, t_ps *ps);
void			ft_sol_1(t_ps *ps, int ra, int rb);
void			ft_sol_2(t_ps *ps, int rra, int rrb);
void			ft_sol_3(t_ps *ps, int rra, int rb);
void			ft_sol_4(t_ps *ps, int ra, int rrb);

/*
**massive
*/

void			ft_create_struct(t_ps *p);
void			ft_write_mas(t_ps *p, char *s);

/*
**check
*/

void			ft_check_num(char *s);
void			ft_count_num(t_ps *p, char *s);
void			ft_check_dub(t_ps *p, int i);
void			ft_check_args(t_ps *p, char **av, int ac);

/*
**tools
*/

int				ft_intlen(int n);
int				ft_atoi(const char *str);
int				ft_atoi(const char *str);
char			*ft_strchr(const char *s, int c);
void			*ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
int				get_next_line(const int fd, char **line);
void			ft_check_stack(t_ps *p);
int				ft_return_min(int a, int b);
void			ft_print_stacks(t_ps *ps);

/*
**commands
*/

void			ft_read_commands(char *line, t_ps *p);
void			ft_push_b(t_ps *p);
void			ft_push_a(t_ps *p);
void			ft_swap_a(t_ps *p);
void			ft_swap_b(t_ps *p);
void			ft_swap_ss(t_ps *p);
void			ft_rr(t_ps *p);
void			ft_ra(t_ps *p);
void			ft_rb(t_ps *p);
void			ft_rra(t_ps *p);
void			ft_rrb(t_ps *p);
void			ft_rrr(t_ps *p);

/*
**push-swap commands
*/

void			ft_ps_push_b(t_ps *p);
void			ft_ps_push_a(t_ps *p);
void			ft_ps_swap_a(t_ps *p);
void			ft_ps_swap_b(t_ps *p);
void			ft_ps_swap_ss(t_ps *p);
void			ft_ps_rr(t_ps *p);
void			ft_ps_ra(t_ps *p);
void			ft_ps_rb(t_ps *p);
void			ft_ps_rra(t_ps *p);
void			ft_ps_rrb(t_ps *p);
void			ft_ps_rrr(t_ps *p);

/*
**checker
*/

void			ft_show(t_ps *p);
void			ft_focus(char **av, int ac, t_ps *p);
void			ft_put_a_elem(int a);
void			ft_put_b_elem(int b);

#endif
