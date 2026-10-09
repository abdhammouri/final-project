/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhammo <aalhammo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:12:20 by aalhammo          #+#    #+#             */
/*   Updated: 2026/09/29 14:47:41 by aalhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	size_t	len;

	num = n;
	len = ft_numlen(num);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
