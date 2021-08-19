/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:50 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/19 12:46:22 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, \
size_t len)
{
	char			*new;
	size_t			siz;
	char			*ori;

	ori = (char *) s;
	siz = ft_strlen(s);
	new = ft_calloc(sizeof(char), (len + 1));
	if (new == NULL)
		return (NULL);
	if (start > siz - 1)
		return (new);
	ft_strlcpy(new, ori + start, len + 1);
	return (new);
}
