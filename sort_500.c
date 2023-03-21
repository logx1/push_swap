/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:42:49 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/21 06:43:04 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_500(t_data *stack_a, t_data *stack_b)
{
    int i = 0;
    int j = 30;
    while (get_lenght(stack_a) > 3)
    {
        if (stack_a[0].val >= i && stack_a[0].val <= j)
        {
            ft_push_b(stack_a, stack_b);
            i++;
            j++;
        }
        if (stack_a[0].val <= i )
        {
           ft_push_b(stack_a, stack_b);
           ft_r(stack_b);
           i++;
           j++;
        }

        if (stack_a[0].val >= j)
        {
          ft_r(stack_a);
        }
        
    }
    
}