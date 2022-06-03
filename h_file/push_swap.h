/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:53:15 by kzak              #+#    #+#             */
/*   Updated: 2022/06/03 12:13:13 by kzak             ###   ########.fr       */
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

typedef enum e_order
{
	DESCENDING = 0,
	ASCENDING = 1
}	t_order;

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
}	t_stack;

typedef struct s_push_swap
{
	t_stack		*a;
	t_stack		*b;
	int		la;
}	t_push_swap;

/*push_swap*/
int		main(int argc, char **argv);

/*list_moves*/

/*insert_in_a*/
int		is_sort(t_stack *stack, int	order, int n);
t_stack	*insert_into_a(int ac, char **av);

/**/
void	pa(t_push_swap *stack);
void	pb(t_push_swap *stack);

/*ra&rb&rr*/
void	ra(t_push_swap *stack);
void	rb(t_push_swap *stack);
void	rr(t_push_swap *stack);

/*rra&rrb&rrr*/
void	rra(t_push_swap *stack);
void	rrb(t_push_swap *stack);
void	rrr(t_push_swap *stack);

/*sa&sb&ss*/
void	sa(t_push_swap *stack);
void	sb(t_push_swap *stack);
void	ss(t_push_swap *stack);

/*utils_libft_lst*/
t_stack	*ft_lstlast2(t_stack *lst);
void	ft_lstadd_back2(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew2(int content);

/*utils*/
void	sort(t_push_swap *stack);
long	atoilong(const char *str);
void	free_str(char **str);

/*push_swap*/

/*5case*/
void	fivecase(t_push_swap *stack, int n);

/*error*/
void	ft_errors(int ac, char **av);

/*varius_sort*/
void	varius_sort(t_push_swap *stack);

#endif
