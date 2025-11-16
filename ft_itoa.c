/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-khan <bel-khan@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:10:29 by bel-khan          #+#    #+#             */
/*   Updated: 2025/11/16 17:13:21 by bel-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	lenght_itoa(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len ++;
		num = -num;
	}
	while (num >= 1)
	{
		len ++;
		num /= 10;
	}
	return (len);
}

static	char	*numtostring(long num, char *str, size_t len)
{
	str = ft_calloc(len + 1, (sizeof(char)));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	len --;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len --;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nm;
	size_t	len;
	char	*str;

	nm = n;
	len = lenght_itoa(nm);
	str = 0;
	str = numtostring(nm, str, len);
	if (!str)
		return (NULL);
	return (str);
}
