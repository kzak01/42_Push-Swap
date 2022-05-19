/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 11:08:21 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap2.h"
#include "stack.h"

static int	count1(char **av, int i, int j)
{
	i = 1;
	j = 0;
	while (av[i])
	{
		j++;
		i++;
	}
	return (j);
}

static int	arrayleng(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	j = 0;
	if (ac > 2)
		j = count1(av, i, j);
	if (ac == 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i], ' ');
			j = 0;
			while (str && str[j])
				j++;
			i++;
		}
		return (j);
	}
	return (j);
}

int	main(int argc, char **argv)
{
	t_stack		stack;
	t_push_swap	data;
	int			n;

	if (argc < 2)
		return (0);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	printf("Length of la: %zu\n", stack.la);
	stack.lb = 0;
	stack.a = (int *) malloc(stack.la * sizeof(int));
	stack.b = (int *) malloc(stack.la * sizeof(int));
	n = arrayleng(argc, argv);
	varius_sort(&stack, &data, argc, argv, n);
	// if (stack.la == 3)
	// {
	// 	insert_into_a(argc, argv, &stack);
	// 	is_sort(&stack);
	// 	sort(&stack);
	// }
	// else if (stack.la == 5)
	// {
	// 	insert_into_a(argc, argv, &stack);
	// 	is_sort(&stack);
	// 	fivecase(&stack);
	// }
	// else
	// {
	// 	data.visualizer = OP;
	// 	data.a = create_stack_with_arg(argc, argv);
	// 	data.b = NULL;
	// 	sort_a(&data, n);
	// }
	free(stack.a);
	free(stack.b);
}
