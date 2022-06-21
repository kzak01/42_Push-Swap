/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 13:31:31 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printarray(t_stack *st)
{
	size_t	j;

	j = 0;
	printf("Stack A:");
	while (j < st->la)
	{
		printf("  %d", st->a[j]);
		j++;
	}
	printf("\n");
	j = 0;
	printf("Stack B:");
	while (j < st->lb)
	{
		printf("  %d", st->b[j]);
		j++;
	}
	printf("\n");
	// j = 0;
	// printf("Stack K:");
	// while (j < st->lk)
	// {
	// 	printf("  %d", st->k[j]);
	// 	j++;
	// }
	// printf("\n");
}
/*cancellare sopra*/

static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sort_k(t_stack *stack)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (i != stack->la)
	{
		j = i + 1;
		while(j != stack->la)
		{
			if (stack->k[i] > stack->k[j])
				swap(&stack->k[i], &stack->k[j]);
			j++;
		}
		i++;
	}
}

static void	insert_into_k(int ac, char **av, t_stack *stack)
{
	int		i;
	int		j;
	int		n;
	char	**str;

	i = 1;
	n = 0;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			stack->k[n] = ft_atoi(str[j]);
			j++;
			n++;
		}
		i++;
		free_str(str);
	}
	sort_k(stack);
}

static void	insert_into_a(int ac, char **av, t_stack *stack)
{
	int		i;
	int		j;
	int		n;
	char	**str;

	i = 1;
	n = 0;
	stack->a = (int *)malloc(8000 * sizeof(int));
	stack->b = (int *)malloc(8000 * sizeof(int));
	stack->k = (int *)malloc(8000 * sizeof(int));
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			stack->a[n] = ft_atoi(str[j]);
			nocopy(stack, ft_atoi(str[j]));
			j++;
			n++;
		}
		i++;
		free_str(str);
	}
}

static int	arrayleng(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	int		temp;

	i = 1;
	temp = 0;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			temp++;
			j++;
		}
		i++;
		free_str(str);
	}
	return (temp);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc < 2)
		exit(1);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	stack.lb = 0;
	stack.lk = arrayleng(argc, argv);
	// printf("Length of la: %zu\n", stack.la);
	stack.b = NULL;
	insert_into_a(argc, argv, &stack);
	insert_into_k(argc, argv, &stack);
	// printarray(&stack);
	is_sort(&stack);
	varius_sort(&stack);
	// printarray(&stack);
	// is_sort(&stack);
	free(stack.a);
	free(stack.b);
	free(stack.k);
}
