/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:36:46 by ziharuty          #+#    #+#             */
/*   Updated: 2023/02/01 14:27:21 by ziharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

int	read_word(const char *str, char c, int index)
{
	int	i;
	int	length;

	i = index;
	length = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**ptr;

	i = 0;
	j = 0;
	index = 0;
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !ptr)
		return (0);
	while (s[index] && s[index] == c)
		index++;
	while (s[index] != '\0')
	{
		ptr[i] = ft_substr(s, index, read_word(s, c, index));
		while (s[index] && s[index] != c)
			index++;
		++i;
		while (s[index] && s[index] == c)
			index++;
	}
	ptr[i] = NULL;
	return (ptr);
}
