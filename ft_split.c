/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:50 by daeidi-h          #+#    #+#             */
/*   Updated: 2021/08/14 20:43:41 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
 * @brief Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c)
{
	char		**str;
	int			i;
	int			nstr;
	int			ini;

	if (!s || !c )
		return (NULL);
	i = 0;
	ini = -1;
	nstr = 0;
	str = (char **) malloc(sizeof(char) * (ft_strlen(s) + 21));
	while (s[i] != '\0')
	{
		if (s[i] != c && ini == -1)
		{
			ini = i;
		}
		if ((s[i + 1] == c && ini != -1) || (s[i + 1] == '\0' && ini != -1))
		{
			str[nstr] = ft_substr(s, ini, i - ini + 1);
			ini = -1;
			nstr++;
		}
		i++;
	}
	str[nstr] = NULL;
	return (str);
}
// int		main()
// {
// 	char	**tabstr;
// 	//int i;

// 	tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	// while (tabstr[i])
// 	// {
// 	// 	printf("%s \n",tabstr[0]);
// 	// 	i++;
// 	// }
// 	printf("%s \n",tabstr[11]);
// }
