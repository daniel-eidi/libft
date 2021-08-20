/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:40:04 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/20 14:50:08 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the 
 * allocated memory.  The memory is set to zero.
 * 
 * @param nmemb 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!nmemb || size <= 0)
		return (NULL);
	mem = malloc (nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, nmemb * size);
	return (mem);
}
