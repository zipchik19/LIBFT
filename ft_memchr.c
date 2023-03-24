/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:27:11 by ziharuty          #+#    #+#             */
/*   Updated: 2023/01/29 21:30:49 by ziharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	a = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
