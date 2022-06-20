/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:09:51 by kzak              #+#    #+#             */
/*   Updated: 2022/01/19 13:57:32 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*element;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		element = new;
		element->next = *lst;
		*lst = element;
	}
}
