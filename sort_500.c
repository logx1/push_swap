/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:57:38 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/20 08:59:33 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_500(t_data *stack_a, t_data *stack_b)
{


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
        
            while ( get_lenght(stack_b) < 100)
        {
          if (stack_a[0].val <= 100)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

            while ( get_lenght(stack_b) < 150)
        {
          if (stack_a[0].val <= 150)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

             while ( get_lenght(stack_b) < 200)
        {
          if (stack_a[0].val <= 200)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
        
              while ( get_lenght(stack_b) < 250)
        {
          if (stack_a[0].val <= 250)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

              while ( get_lenght(stack_b) < 300)
        {
          if (stack_a[0].val <= 300)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

        while ( get_lenght(stack_b) < 350)
        {
          if (stack_a[0].val <= 350)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }

         while ( get_lenght(stack_b) < 400)
        {
          if (stack_a[0].val <= 400)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
            while ( get_lenght(stack_b) < 450)
        {
          if (stack_a[0].val <= 450)
          {
            ft_push_b(stack_a, stack_b);
          }else
          {
            ft_r(stack_a);
          }
        }
}