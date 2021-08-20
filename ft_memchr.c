/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:50 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/20 09:57:38 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief  scan the initial n bytes of S, stopping in the 
 * first match of value c. s and c are interpreted as unsigned char.
 * 
 * @param s source to start
 * @param c constant byte that will be scanned
 * @param n max bytes positions to run
 * @return void* pointer found char c in s or null
*/
void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t	i;
	char	*b;

	b = (char *)s;
	i = 0;
	while (c % 256 > 256)
		c = c % 256;
	while (i < n)
	{
		if (b[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
