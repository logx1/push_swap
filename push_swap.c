/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:14 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/02/28 19:42:33 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
    (void)argc;
    t_data *lol;
    int i = 0;
    if (check_one(argv,argc) == 0)
    {
      lol = fill_stack(argv);
    
    
    
    
    
    
    
    
    
    
    
    
    
     while (lol[i].pos == 0)
    {
        printf("%d\n",lol[i].val);
        i++;
    }
     printf("%d\n",lol[i].val);
    }
    
   
    return (0);
}