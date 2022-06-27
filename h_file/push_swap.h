/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/06/27 09:58:50 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*k;
	int	la;
	int	lb;
	int	lk;
}	t_stack;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef enum e_int
{
	MAX_INT = 2147483647,
	MIN_INT = -2147483648
}	t_int;

/*src*/
	/*push_swap*/
int		main(int argc, char **argv);
void	printarray(t_stack *st);

	/*array_moves*/

		/*k_stack*/
void	insert_into_k(int ac, char **av, t_stack *stack);

		/*push*/
void	pa(t_stack *stack);
void	pb(t_stack *stack);

		/*reverse_rotate*/
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

		/*rotate*/
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

		/*swap*/
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

		/*utils*/
void	free_str(char **str);
long	atoilong(const char *str);
int		is_sort(t_stack *stack);
int		find_min(t_stack *stack);

	/*push_swap*/

		/*errors*/
void	ft_errors(int ac, char **av);
void	nocopy(t_stack *stack, int i);

		/*find_pivot*/
void	find_pivot(t_stack *stack, int *pivot, int index);

		/*infinity*/
void	hundred_case(t_stack *stack);
void	infinity(t_stack *stack);

		/*push_to_b*/
void	push_to_b(t_stack *stack, int *pivot, int index);

		/*small_case*/
void	find_position(t_stack *stack, int min);
void	threecase(t_stack *stack);
void	tencase(t_stack *stack);

		/*sort_b*/
void	sort_b(t_stack *stack);

		/*varius_sort*/
void	varius_sort(t_stack *stack);

#endif
