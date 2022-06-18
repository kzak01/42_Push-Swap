/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:53:15 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:00:23 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include <limits.h>
# include "libft.h"

typedef enum e_int
{
	MAX_INT = 2147483647,
	MIN_INT = -2147483648
}	t_int;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef enum e_stacks
{
	STACK_B = 0,
	STACK_A = 1
}	t_stacks;

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_push_swap
{
	t_stack		*a;
	t_stack		*b;
	int			la;
}	t_push_swap;

typedef struct s_counter
{
	int		i;
	int		j;
	int		temp;
	char	**str;
	int		medium_pivot;
	int		m_medium_pivot;
	int		pa;
	int		ra;
	int		rb;
}	t_counter;

/*push_swap*/
int		main(int argc, char **argv);
void	free_stack(t_push_swap *stack);

/*list_moves*/

/*insert_in_a*/
t_stack	*insert_into_a(int ac, char **av);

/*pa_pb*/
void	pa(t_push_swap *stack);
void	pb(t_push_swap *stack);

/*ra_rb_rr*/
void	ra(t_push_swap *stack);
void	rb(t_push_swap *stack);
void	rr(t_push_swap *stack);

/*rra_rrb_rrr*/
void	rra(t_push_swap *stack);
void	rrb(t_push_swap *stack);
void	rrr(t_push_swap *stack);

/*sa_sb_ss*/
void	sa(t_push_swap *stack);
void	sb(t_push_swap *stack);
void	ss(t_push_swap *stack);

/*utils_libft_lst*/
t_stack	*ft_lstlast2(t_stack *lst);
void	ft_lstadd_back2(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew2(int content);

/*utils*/
void	fourcase(t_push_swap *stack, int n);
long	atoilong(const char *str);
void	free_str(char **str);
int		is_sort(t_stack *stack, int order, int n);

/*push_swap*/

/*5case*/
void	sort_max(t_push_swap *stack, int max);
int		find_max(t_stack *stack, int n);
void	fivecase(t_push_swap *stack, int n);

/*error*/
void	nocopy(t_stack *stack, int i);
void	ft_errors(char **av);

/*find_pivot*/
void	find_pivot(int *pivot, t_stack *stack, int n);

/*recursive_call*/
void	recursive_call(t_push_swap *stack, int *temp, int order);

/*sort_reverse*/
void	do_pa(t_push_swap *stack, int n);
void	sort_reverse(t_push_swap *stack, int n);

/*sort_small*/
void	sort_small(t_push_swap *stack, int n, int order);

/*sort_stack*/
void	sort_stack(t_push_swap *stack, int n);

/*varius_sort*/
void	varius_sort(t_push_swap *stack);
void	sort(t_push_swap *stack);

#endif
