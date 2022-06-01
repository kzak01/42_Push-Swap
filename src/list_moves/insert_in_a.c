/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_in_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:02:32 by kzak              #+#    #+#             */
/*   Updated: 2022/06/01 16:14:33 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack *stack, int	order, int n)
{
	int	temp;

	if (stack == NULL)
		return (1);
	temp = stack->content;
	stack = stack->next;
	while (n > 0 && stack)
	{
		if (order == DESCENDING)
		{
			if (stack->content > temp)
				return (0);
			temp = stack->content;
		}
		else if (order == ASCENDING)
		{
			if (stack->content < temp)
				return (0);
			temp = stack->content;
		}
		stack = stack->next;
	}
	return (1);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

t_stack	*create_stack(int content)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	if (temp == NULL)
		return (0);
	temp->content = content;
	temp->prev = 0;
	temp->next = 0;
	return (temp);
}

t_stack	*insert_into_a(int ac, char **av)
{
	int			i;
	int			j;
	t_stack		*result;
	t_stack		*cont;
	char		**str;

	result = NULL;
	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			cont = create_stack(atoilong(str[j]));
			// stack_last(&result, cont);
			ft_lstadd_back2(&result, cont);
			j++;
		}
		i++;
		free_str(str);
	}
	return (result);
}
