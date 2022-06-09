/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_in_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:02:32 by kzak              #+#    #+#             */
/*   Updated: 2022/06/09 11:07:07 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*insert_into_a(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*result;
	t_stack	*cont;
	char	**str;

	i = 1;
	result = NULL;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			cont = ft_lstnew2(ft_atoi(str[j]));
			ft_lstadd_back2(&result, cont);
			j++;
		}
		i++;
		free_str(str);
	}
	nocopy(result);
	return (result);
}
