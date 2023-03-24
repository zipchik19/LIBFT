/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:38:17 by ziharuty          #+#    #+#             */
/*   Updated: 2023/02/01 15:06:14 by ziharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (dst > src)
		while (len--)
			*(temp1 + len) = *(temp2 + len);
	else if (src > dst)
		while (len--)
			*(temp1++) = *(temp2++);
	return (dst);
}
