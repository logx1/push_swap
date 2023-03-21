/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:07:25 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/18 16:16:06 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_lenght(t_data *stack)
{
    int i = 0;

    while(stack[i].val)
        i++;

    return(i);
}

void sort_three(t_data *stack_a)
{
    if (get_lenght(stack_a) == 3)
    {
    if(stack_a[0].val > stack_a[1].val && stack_a[1].val < stack_a[2].val && stack_a[0].val < stack_a[2].val)
        ft_s(stack_a);
    if(stack_a[0].val > stack_a[1].val && stack_a[1].val > stack_a[2].val)
    {
        ft_s(stack_a);
        ft_rr(stack_a);
    }
    if(stack_a[0].val > stack_a[1].val && stack_a[1].val < stack_a[2].val && stack_a[0].val > stack_a[2].val)
        ft_r(stack_a);
    if(stack_a[0].val < stack_a[1].val && stack_a[1].val > stack_a[2].val && stack_a[0].val < stack_a[2].val)
    {
        ft_s(stack_a);
        ft_r(stack_a);
    }
    if(stack_a[0].val < stack_a[1].val && stack_a[1].val > stack_a[2].val && stack_a[0].val > stack_a[2].val)
        ft_rr(stack_a);
    }
}
int get_big(t_data *stack)
{
    int i = 0;
    int j = 0;
    int tmp = stack[0].val;
    while (i < get_lenght(stack))
    {
        if( tmp < stack[i].val)
        {
            tmp = stack[i].val;
             j = i;
        }
           
        i++;
    }
    return(j);
}
void push_big(t_data *stack_a, t_data *stack_b)
{
    int i = 0;
    int big = get_big(stack_b);
    if(big <= get_lenght(stack_b) / 2)
    {
        while (i < big)
    {
        ft_r(stack_b);
        i++;
    }    
    }
    
    if(big > get_lenght(stack_b) / 2)
    {
         while (i < (get_lenght(stack_b) - big))
    {
        ft_rr(stack_b);
        i++;
    }
    }
    
   
        ft_push_a(stack_a , stack_b);
    
    
}

void sort_lol(t_data *stack_a, t_data *stack_b)
{
    int i = get_lenght(stack_b);
    
    while (i > 0)
    {
         push_big(stack_a, stack_b);
         i--; 
    }
   
    
    
    
}



//==================================================
//==================================================
//==================================================

// =================================================

int get_mud_val(t_data *stack)
{
    int i = 0;
    int rus = 0;
    while (stack[i].val)
    {
        rus += stack[i].val;
        i++;
    }
    return (rus/i);
}

void send_small_halv(t_data *stack_a, t_data *stack_b)
{
      int mdil_v = get_mud_val(stack_a);
    int lenght = get_lenght(stack_a) / 2;
  
  while (get_lenght(stack_a) > lenght +1)
  {
    if (stack_a[0].val < mdil_v)
    {
        ft_push_b(stack_a,stack_b);
    }else
    {
          ft_r(stack_a);  
    }
  }
  
 if (get_lenght(stack_a) == 3)
    {
        sort_three(stack_a);
    }   
}

void my_sort(t_data *stack_a,t_data *stack_b)
{
    while (get_lenght(stack_a) > 3)
    {
        send_small_halv(stack_a,stack_b);
    }
}




