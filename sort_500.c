/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:42:49 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:53:09 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun11(int *i, int *j, int end)
{
	if (*i <= end)
		(*i)++;
	if (*j < end)
		(*j)++;
}

void	fun22(t_data *stack_a, t_data *stack_b)
{
	ft_push_b(stack_a, stack_b);
	ft_rb(stack_b);
}

void	fun33(int *i, int *j)
{
	*i = 0;
	*j = 36;
}

void	sort_500(t_data *stack_a, t_data *stack_b)
{
	int		i;
	int		j;
	int		end;
	int		*ko;

	ko = malloc(sizeof(int) * get_lenght(stack_a) + 1);
	ko = nurmal_sort(stack_a, ko);
	fun33(&i, &j);
	end = get_lenght(stack_a);
	while (get_lenght(stack_a))
	{
		if (stack_a[0].val >= ko[i] && stack_a[0].val <= ko[j])
		{
			ft_push_b(stack_a, stack_b);
			fun11(&i, &j, end);
		}
		if (stack_a[0].val <= ko[i])
		{
			fun22(stack_a, stack_b);
			fun11(&i, &j, end);
		}
		if (stack_a[0].val >= ko[j])
			ft_ra(stack_a);
	}
}
