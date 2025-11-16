/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-khan <bel-khan@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:19:48 by bel-khan          #+#    #+#             */
/*   Updated: 2025/11/12 22:19:48 by bel-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = ft_calloc(len, sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}
