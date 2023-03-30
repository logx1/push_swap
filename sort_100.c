/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:42:18 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:53:01 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun1(int *i, int *j, int end)
{
	if (*i <= end)
		(*i)++;
	if (*j < end)
		(*j)++;
}

void	fun2(t_data *stack_a, t_data *stack_b)
{
	ft_push_b(stack_a, stack_b);
	ft_rb(stack_b);
}

void	fun3(int *i, int *j)
{
	*i = 0;
	*j = 18;
}

void	sort_100(t_data *stack_a, t_data *stack_b)
{
	int		i;
	int		j;
	int		end;
	int		*ko;

	ko = malloc(sizeof(int) * get_lenght(stack_a) + 1);
	ko = nurmal_sort(stack_a, ko);
	fun3(&i, &j);
	end = get_lenght(stack_a);
	while (get_lenght(stack_a))
	{
		if (stack_a[0].val >= ko[i] && stack_a[0].val <= ko[j])
		{
			ft_push_b(stack_a, stack_b);
			fun1(&i, &j, end);
		}
		if (stack_a[0].val <= ko[i])
		{
			fun2(stack_a, stack_b);
			fun1(&i, &j, end);
		}
		if (stack_a[0].val >= ko[j])
			ft_ra(stack_a);
	}
}
