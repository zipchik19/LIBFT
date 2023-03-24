/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:22:06 by ziharuty          #+#    #+#             */
/*   Updated: 2023/02/01 14:39:40 by ziharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_len(int n)
{
	size_t	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{	
	char		*s;
	size_t		len;
	long int	numb;

	numb = n;
	if (numb == 0)
		return (ft_strdup("0"));
	len = str_len(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (numb < 0)
	{
		s[0] = '-';
		numb *= -1;
	}
	s[len] = '\0';
	while (numb > 0)
	{
		s[(len--) - 1] = (numb % 10) + '0';
		numb = numb / 10;
	}
	return (s);
}
