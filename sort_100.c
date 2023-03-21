/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:42:18 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/21 06:42:19 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void sort_100(t_data *stack_a, t_data *stack_b)
{
    int i = 0;
    int j = 15;
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