/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:10:14 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 10:50:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "stack.h"
# include "push_swap2.h"
# include "push_swap.h"

t_list	*read_instruction(void);
int		exec_instruction(t_list *instruction, t_push_swap *stack);

#endif
