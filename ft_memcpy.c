/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:50 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/03 19:04:13 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief this function copies n bytes from memory area src to 
 * memory area dst. If dst and src overlap, behavior is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This
 * function returns the original value of dst
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	size_t	i;
	char	*cp;
	char	*ori;

	ori = (char *)src;
	cp = (char *)dest;
	i = 0;
	while (i < n)
	{
		cp[i] = ori[i];
		i++;
	}
	return (dest);
}
