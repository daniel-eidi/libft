/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:50 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/09 09:02:38 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief function copies n bytes from memory area src to
 *memory area dest.  The memory areas may overlap: copying takes
 * place as though the bytes in src are first copied into a
 * temporary array that does not overlap src or dest, and the bytes
 * are then copied from the temporary array to dest
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	temp = (char *) malloc(n * sizeof (char));
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	free(temp);
	return (dest);
}
