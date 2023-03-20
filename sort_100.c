/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:02:46 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/20 12:33:55 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_100(t_data *stack_a, t_data *stack_b)
{
        // while ( get_lenght(stack_b) < 15)
        // {
        //   if (stack_a[0].val <= 15)
        //   {
        //     ft_push_b(stack_a, stack_b);
        //   }else
        //   {
        //     ft_r(stack_a);
        //   }
        // }
        while ( get_lenght(stack_b) < 30)
        {  
          if (stack_a[0].val <= 30)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

         while ( get_lenght(stack_b) < 50)
        {
          if (stack_a[0].val <= 50)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
       


         while ( get_lenght(stack_b) < 60)
        {
          if (stack_a[0].val <= 60)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

         while ( get_lenght(stack_b) < 70)
        {
          if (stack_a[0].val <= 70)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
           while ( get_lenght(stack_b) < 80)
        {
          if (stack_a[0].val <= 80)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

            while ( get_lenght(stack_b) < 85)
        {
          if (stack_a[0].val <= 85)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
}