/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhammo <aalhammo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:41:44 by aalhammo          #+#    #+#             */
/*   Updated: 2026/10/02 16:59:23 by aalhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static	void	free_split(char **result, size_t word)
{
	while (word > 0)
	{
		word--;
		free(result[word]);
	}
	free(result);
}

static int	fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	start;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		result[word] = ft_substr(s, start, i - start);
		if (result[word] == NULL)
		{
			free_split(result, word);
			return (0);
		}
		word++;
	}
	result[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (fill_split(result, s, c) == 0)
		return (NULL);
	return (result);
}
