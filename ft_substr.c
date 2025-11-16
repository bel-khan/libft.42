/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-khan <bel-khan@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:46:23 by bel-khan          #+#    #+#             */
/*   Updated: 2025/11/16 18:42:41 by bel-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	rlen;
	char	*res;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= (size_t)start)
		return (ft_strdup(""));
	if (slen - start < len)
		rlen = slen - start;
	else
		rlen = len;
	res = malloc((rlen + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, rlen + 1);
	return (res);
}
