/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_in_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:02:32 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 10:22:22 by mvolpi           ###   ########.fr       */
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

	result = NULL;
	i = 1;
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
	return (result);
}
