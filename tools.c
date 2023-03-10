/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:08:27 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/10 08:04:52 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int git_big_pos(t_data *stack)
{
    int i = 0;
    while(stack[i].val)
    {
        i++;
    }
    if( i != 0)
    {
        return (i - 1);
    }else
    {
        return (i);
    }
    
    
}

void ft_s(t_data *stack)
{
    int tmp;
    tmp = stack[0].val;
    stack[0].val = stack[1].val;
    stack[1].val = tmp;
}

void  ft_r(t_data *stack)
{
    int i = 0;
    int tmp = stack[0].val;
   while (stack[i+1].val)
   {
        stack[i].val = stack[i+1].val;
        i++;
   }
   stack[i].val = tmp;
}

void ft_rr(t_data *stack)
{
    int end = git_big_pos(stack);
    int stack_end = stack[end].val;
    while(end != 0)
    {
        stack[end].val = stack[end - 1].val;
        end--;
        if(end == 0 )
        {
            stack[0].val = stack_end;
        }
    }
}

void ft_push_a(t_data *stack_a, t_data *stack_b)
{
    int i = 0;
    int end = git_big_pos(stack_a);
    while(end != -1)
    {
        stack_a[end + 1].val = stack_a[end].val;
        end--;
    
        if(end == -1 )
        {
            stack_a[0].val = stack_b[0].val;
            
        }
    }
    while (stack_b[i].val)
    {
        stack_b[i].val = stack_b[i + 1].val;
        i++;
    }
}

void ft_push_b(t_data *stack_a, t_data *stack_b)
{
    int i = 0;
    int end = git_big_pos(stack_b);
    
    while(end != -1)
    {
        stack_b[end + 1].val = stack_b[end].val;
        end--;
    
        if(end == -1 )
        {
            stack_b[0].val = stack_a[0].val;
        }
    }
    while (stack_a[i].val)
    {
        stack_a[i].val = stack_a[i + 1].val;
        i++;
    }
}

// int main(int argc, char **argv)
// {
//     (void)argc;
//     t_data *lol1;
//     t_data *lol2; 
//     lol1 = NULL;
//     lol2 = NULL;
    
//     lol1 = fill_stack(argv);
//     lol2 = malloc(sizeof(t_data) * ft_word_count(argv,' '));
    
//     // ft_s(lol1);
//     // ft_r(lol1);
//     // ft_rr(lol1);
//     // lol2[0].val = 7;
//     // lol2[1].val = 55;
//     // lol2[2].val = 99;
//     ft_push_a(lol2, lol1);
   
   
      
//     sprint(lol2);

//     return (0);
// }