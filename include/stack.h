/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:57:17 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 13:29:48 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft.h"

# define VISUAL_SPEED	100000

# define FT_INT_MAX 	2147483647
# define FT_INT_MIN 	-2147483648

# define OP		1
# define VISUAL	2

typedef struct s_stack2
{
	struct s_stack2	*next;
	struct s_stack2	*prev;
	int				content;
}				t_stack2;

typedef struct s_push_swap
{
	t_stack2		*a;
	t_stack2		*b;
	int				visualizer;
}				t_push_swap;

//create_stack_with_arg
t_stack2	*create_stack_with_arg(int argc, char *argv[]);

//moves
void		push(t_stack2 **from, t_stack2 **to);
void		rotate(t_stack2 **stack);
void		rrotate(t_stack2 **stack);
void		swap(t_stack2 *stack);

//operator
void		operator(char *op, t_push_swap *data);

//print_stack
void		print_stacks(t_stack2 *stack_a, t_stack2 *stack_b);

//utils3
t_stack2	*stack_new(int content);
void		stack_add_back(t_stack2 **lst, t_stack2 *new_list);
void		stack_clear(t_stack2 **lst);
void		return_stack(t_push_swap *data, int ra_cnt, int rb_cnt);
t_stack2	*stack_last(t_stack2 *lst);

//utils2
void		stack_add_front(t_stack2 **lst, t_stack2 *new_list);
int			check_stack_sorted(t_stack2 *stack_a, t_stack2 *stack_b);
int			stack_size(t_stack2 *lst);

#endif
