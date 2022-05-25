/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:57:17 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:14:50 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft.h"

# define VISUAL_SPEED	100000

# define FT_INT_MAX 	2147483647
# define FT_INT_MIN 	-2147483648

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
}				t_stack;

typedef struct s_push_swap
{
	t_stack		*a;
	t_stack		*b;
}				t_push_swap;

//create_stack_with_arg
t_stack		*create_stack_with_arg(int argc, char *argv[]);

//moves
void		push(t_stack **from, t_stack **to);
void		rotate(t_stack **stack);
void		rrotate(t_stack **stack);
void		swap(t_stack *stack);

//operator
void		operator(char *op, t_push_swap *data);

//utils3
t_stack		*stack_new(int content);
void		stack_clear(t_stack **lst);
void		return_stack(t_push_swap *data, int ra_cnt, int rb_cnt);
t_stack		*stack_last(t_stack *lst);

//utils2
void		stack_add_back(t_stack **lst, t_stack *new_list);
void		stack_add_front(t_stack **lst, t_stack *new_list);
int			check_stack_sorted(t_stack *stack_a, t_stack *stack_b);
int			stack_size(t_stack *lst);

#endif
