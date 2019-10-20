/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 19:10:25 by brickon-          #+#    #+#             */
/*   Updated: 2019/02/10 17:42:38 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
		newlist->next = NULL;
	}
	else
	{
		newlist->content = malloc(content_size);
		if (newlist->content == NULL)
		{
			free(newlist);
			return (NULL);
		}
		newlist->content = ft_memcpy(newlist->content, content, content_size);
		newlist->content_size = content_size;
		newlist->next = NULL;
	}
	return (newlist);
}
