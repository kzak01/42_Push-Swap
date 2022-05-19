/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 13:29:02 by kzak             ###   ########.fr       */
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

	if (argc < 2)
		return (0);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	printf("Length of la: %zu\n", stack.la);
	stack.lb = 0;
	stack.a = (int *) malloc(stack.la * sizeof(int));
	stack.b = (int *) malloc(stack.la * sizeof(int));
	varius_sort(&stack, &data, argc, argv);
	free(stack.a);
	free(stack.b);
}
