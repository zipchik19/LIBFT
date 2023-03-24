/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:10:16 by ziharuty          #+#    #+#             */
/*   Updated: 2023/02/01 17:55:17 by ziharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	index;
	size_t	i;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (!dst)
		return (srclen);
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize == 0)
		return (srclen);
	srclen += i;
	index = i;
	while (src[i - index] && i < dstsize - 1)
	{
		dst[i] = src[i - index];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (srclen);
}
