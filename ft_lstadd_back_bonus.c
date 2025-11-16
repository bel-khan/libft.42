/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-khan <bel-khan@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:19:10 by bel-khan          #+#    #+#             */
/*   Updated: 2025/11/08 20:19:10 by bel-khan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast (*lst)-> next = new;
}
