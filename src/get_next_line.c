/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:16:52 by brickon-          #+#    #+#             */
/*   Updated: 2019/10/16 23:10:54 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_search_node(t_list **list, int fd)
{
	t_list	*tmp;

	tmp = *list;
	if (*list == NULL)
	{
		*list = ft_lstnew(NULL, 0);
		(*list)->content_size = (size_t)fd;
		return (*list);
	}
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
			return (tmp);
		if (tmp->next == NULL)
		{
			tmp->next = ft_lstnew(NULL, 0);
			tmp->next->content_size = fd;
			return (tmp->next);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

static void		ft_join_free(char **s1, char *s2)
{
	char *str;

	str = ft_strjoin(*s1, s2);
	ft_strdel(s1);
	*s1 = str;
}

static char		*ft_cut_line(char **s)
{
	char	*str;
	int		i;
	char	*tmp;

	tmp = *s;
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	str = ft_strsub(tmp, 0, i);
	if (ft_strchr(tmp, '\n'))
		tmp = ft_strdup((ft_strchr(tmp, '\n') + 1));
	else
		tmp = ft_strdup("\0");
	free(*s);
	*s = ft_strdup(tmp);
	free(tmp);
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	t_list			*tmp;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0 ||
			(tmp = ft_search_node(&list, fd)) == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		(!(tmp->content)) ? tmp->content = ft_strdup(buf) :
			ft_join_free((char **)&(tmp->content), buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret == 0 && ((tmp->content == NULL) || ft_strlen(tmp->content) == 0))
		return (0);
	*line = ft_cut_line((char **)&(tmp->content));
	return (1);
}
