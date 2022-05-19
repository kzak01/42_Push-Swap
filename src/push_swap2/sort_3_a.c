/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:51:17 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 14:09:26 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"

static void	type_a(t_push_swap *data)
{
	if (data->a->content < data->a->next->next->content)
		return (operator("sa", data));
	operator("sa", data);
	operator("ra", data);
	operator("sa", data);
	operator("rra", data);
}

static void	type_b(t_push_swap *data)
{
	operator("sa", data);
	operator("ra", data);
	operator("sa", data);
	operator("rra", data);
	operator("sa", data);
}

static void	type_c(t_push_swap *data)
{
	operator("ra", data);
	operator("sa", data);
	operator("rra", data);
	operator("sa", data);
}

static void	type_d(t_push_swap *data)
{
	operator("ra", data);
	operator("sa", data);
	operator("rra", data);
}

void	sort_three_a(t_push_swap *data)
{
	if (check_sort_n(data->a, ASC, 3))
		return ;
	if (data->a->content > data->a->next->content && \
		data->a->next->content < data->a->next->next->content)
		return (type_a(data));
	if (data->a->content > data->a->next->content && \
		data->a->next->content > data->a->next->next->content)
		return (type_b(data));
	if (data->a->content < data->a->next->content && \
		data->a->next->content > data->a->next->next->content)
	{
		if (data->a->content > data->a->next->next->content)
			return (type_c(data));
		return (type_d(data));
	}
}

