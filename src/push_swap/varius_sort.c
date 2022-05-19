/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:00:25 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 11:07:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	insert2(char **av, int n, t_stack *stack)
{
	size_t	i;

	i = 0;
	while (i < stack->la)
	{
		n = ft_atoi(av[i]);
		stack->a[i] = n;
		i++;
	}
}

static void	insert_into_a(int ac, char **argv, t_stack *stack)
{
	size_t		i;
	size_t		j;
	int			n;

	i = 0;
	j = 1;
	n = 0;
	if (ac > 2)
	{
		while (i < stack->la)
		{
			n = ft_atoi(argv[j]);
			stack->a[i] = n;
			i++;
			j++;
		}
	}
	if (ac == 2)
	{
		insert2(ft_split(argv[1], ' '), n, stack);
	}
}

void	varius_sort(t_stack *stack, t_push_swap *data, int argc, char **argv, int n)
{
	ft_memset(data, 0, sizeof(data));
	if (stack->la == 3)
	{
		insert_into_a(argc, argv, stack);
		is_sort(stack);
		sort(stack);
	}
	else if (stack->la == 5)
	{
		insert_into_a(argc, argv, stack);
		is_sort(stack);
		fivecase(stack);
	}
	else
	{
		data->visualizer = OP;
		data->a = create_stack_with_arg(argc, argv);
		data->b = NULL;
		sort_a(data, n);
	}
}
