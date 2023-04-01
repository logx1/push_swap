/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:14 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/01 16:55:17 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;
	int		length;

	length = ft_word_count(argv, ' ');
	stack_a = malloc(sizeof(t_data) * length + 1);
	stack_b = malloc(sizeof(t_data) * length + 1);
	if (check_error_glob(argc, argv, stack_a) == 0)
	{
		stack_a = fill_stack(argv, stack_a);
		if (length <= 3 && check(stack_a) != 0)
			sort_three(stack_a);
		if (length > 3 && length <= 5 && check(stack_a) != 0)
			sort_5(stack_a, stack_b);
		if (length > 5 && length <= 100 && check(stack_a) != 0)
			sort_100(stack_a, stack_b);
		if (length > 100 && length != 0)
			sort_500(stack_a, stack_b);
		if (length > 5 && length != 0)
			sort_lol(stack_a, stack_b);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
