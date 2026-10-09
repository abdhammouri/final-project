/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhammo <aalhammo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:23:11 by aalhammo          #+#    #+#             */
/*   Updated: 2026/09/29 11:43:08 by aalhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		len1;
	size_t		len2;
	size_t		i;
	size_t		j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc (len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result [i + j] = '\0';
	return (result);
}
