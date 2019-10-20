/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:28:08 by brickon-          #+#    #+#             */
/*   Updated: 2019/04/21 18:31:50 by brickon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	k;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			&& (len != i))
		len--;
	len = len - i;
	str = (ft_strnew(len));
	if (str == NULL)
		return (NULL);
	k = -1;
	while (++k < len)
		str[k] = (char)s[i++];
	return (str);
}
