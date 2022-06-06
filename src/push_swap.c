/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:00:52 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 14:09:33 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*print_stack_a(t_stack *stack_a)
{
	int		i;
	char	*tmp;

	tmp = ft_itoa(stack_a->content);
	i = 20 - ft_strlen(tmp);
	while (i--)
		ft_putchar_fd(' ', 1);
	ft_putstr_fd(tmp, 1);
	free(tmp);
	stack_a = stack_a->next;
	return (stack_a);
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_putendl_fd("             STACK_A : STACK_B", 1);
	while (stack_a || stack_b)
	{
		if (stack_a)
			stack_a = print_stack_a(stack_a);
		else
			ft_putstr_fd("                    ", 1);
		ft_putstr_fd(" : ", 1);
		if (stack_b)
		{
			ft_putnbr_fd(stack_b->content, 1);
			stack_b = stack_b->next;
		}
		ft_putchar_fd('\n', 1);
	}
}
/*cancellare sopra*/

static void	free_stack(t_push_swap *stack)
{
	t_stack	*cont;

	while (stack->a)
	{
		cont = stack->a->next;
		free(stack->a);
		stack->a = cont;
	}
	stack->a = 0;
	while (stack->b)
	{
		cont = stack->b->next;
		free(stack->b);
		stack->b = cont;
	}
	stack->b = 0;
}

static int	arrayleng(int ac, char **av)
{
	int			i;
	int			j;
	char		**str;
	int			count;

	i = 1;
	count = 0;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			count++;
			j++;
		}
		i++;
		free_str(str);
	}
	return (count);
}

int	main(int argc, char **argv)
{
	t_push_swap	stack;

	if (argc < 2)
		return (0);
	ft_errors(argc, argv);
	ft_memset(&stack, 0, sizeof(stack));
	stack.la = arrayleng(argc, argv);
	// printf("stack leng %d\n", stack.la);
	stack.a = insert_into_a(argc, argv);
	// print_stacks(stack.a, stack.b);
	stack.b = NULL;
	varius_sort(&stack);
	// print_stacks(stack.a, stack.b);
	free_stack(&stack);
	return (0);
}
