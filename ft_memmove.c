/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-khan <bel-khan@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:26:16 by bel-khan          #+#    #+#             */
/*   Updated: 2025/11/13 17:26:16 by bel-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;	

	if (!dst && !src)
		return (NULL);
	if (len == 0 || d == s)
		return (dst);
	s = (unsigned const char *)src;
	d = (unsigned char *)dst;
	i = len;
	if (d > s)
	{
		while (i--)
			d[i] = s[i];
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
