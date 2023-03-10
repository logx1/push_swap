/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:14 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/10 14:40:46 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
    t_data *stack_a;
    t_data *stack_b;
    int length = ft_word_count(argv, ' ');
    stack_b = malloc(sizeof(int) * length + 50);
  // stack_b[0].val = 1;
    stack_a = NULL;
    if (check_error_glob(argc,argv,stack_a) == 0)
    {
      stack_a = fill_stack(argv);
      // ft_r(stack_a);
      // ft_rr(stack_a);
      // ft_rr(stack_a);
      // nurmal_sort(stack_a);
      // ft_push_a(stack_b , stack_a);
      // ft_push_b(stack_a , stack_b);
      // ft_push_b(stack_a , stack_b);
      // ft_push_b(stack_a , stack_b);
      sort_three(stack_a);
    sprint(stack_a);
    }else
    {
      printf("please check your arg!! \n");
    }
    return (0);
}