/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_in_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:02:32 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:04:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*insert_into_a(int ac, char **av)
{
	t_stack		*result;
	t_stack		*cont;
	t_counter	count;

	count.i = 1;
	result = NULL;
	while (count.i < ac)
	{
		count.str = ft_split(av[count.i], ' ');
		count.j = 0;
		while (count.str[count.j])
		{
			cont = ft_lstnew2(ft_atoi(count.str[count.j]));
			ft_lstadd_back2(&result, cont);
			nocopy(result, ft_atoi(count.str[count.j]));
			count.j++;
		}
		count.i++;
		free_str(count.str);
	}
	return (result);
}
