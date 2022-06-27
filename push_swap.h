/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/06/27 11:01:15 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		*c;
	size_t	la;
	size_t	lb;
}	t_stack;

typedef struct s_chunk
{
	int		*a;
	int		*b;
	int		*c;
	int		*d;
	int		*e;
	int 	ca;
	int		cb;
	int		cc;
	int		cd;
	int		ce;
	int		m;
}	t_chunk;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef enum e_int
{
	INT_MAX = 2147483647,
	INT_MIN = -2147483648
}	t_int;

//atoilong
long	atoilong(const char *str);
//othercase
void othercase(t_stack *stack);

//printarray
void	printarray(t_stack *st);
void 	printchunk(t_chunk *chunk);
void 	printc(t_stack *stack);

//main
int		main(int argc, char **argv);

//3case
void	threecase(t_stack *stack);
int		sort(t_stack *stack);

//5case
void	fivecase(t_stack *stack);
int		find_min(t_stack *stack);
int		find_minb(t_stack *stack);
int		find_max(t_stack *stack);
int		find_maxb(t_stack *stack);
void	fourcase(t_stack *stack, int min);

//moves
void	sort_max(t_stack *stack, int max);
void	sort_min(t_stack *stack, int min);

//ft_errors
void	ft_errors(int ac, char **av);
void	nocopy(t_stack *stack, int i);

//swap
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

//rotate
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

//reverse_rotate
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

//push
void	pa(t_stack *stack);
void	pb(t_stack *stack);

//othercase_utils
void	pa_minb1(t_stack *stack, int medianb, int mhanz);
void    pa_minb2(t_stack *stack, int medianb, int mhanz);
void    pa_maxb1(t_stack *stack, int medianb, int median);
void    pa_maxb2(t_stack *stack, int medianb, int median);
void    vordermaxmin(t_stack *stack, int medianb, int median);
void    putadjacent(t_stack *stack,int len);
void    sortmaxmin(t_stack *stack,int len, int median);
void 	sortmaxmin2(t_stack *stack, int medianb);
void	putadjacent2(t_stack *stack, int len);

//fivehundredcase
void fivehundredcase(t_stack *stack,t_chunk *chunk);

//fivehundredcase_utils
void chunk_division(t_stack *stack, t_chunk *chunk);
size_t save_positionstart(t_stack *stack, t_chunk *chunk, int ca);
size_t save_positionend(t_stack *stack, t_chunk *chunk, int ca);
void sort_hundred(t_stack *stack, t_chunk *chunk);
void putadjacent_fivehundred(t_stack *stack, t_chunk *chunk, int len);


//chunk_order
void chunk_order(int *chunk, int count);
void push_chunk(t_stack *stack, t_chunk *chunk);
void push_less_move(t_stack *stack, int k, int l); 

//utils_functions
void	free_str(char **str);

#endif