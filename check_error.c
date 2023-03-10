/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:11:37 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/02 13:14:40 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_error_1(char **a_rgv, int a_rgc)

{
    int i = 1;
    int j = 0;
    int x = 0;
    
    if (a_rgc == 1)
        x++;
    while (a_rgv[i])
    {
        while (a_rgv[i][j])
        {
            if ((a_rgv[i][j] > '9' || a_rgv[i][j]< '0') && a_rgv[i][j] != ' ')
                x++;
            j++;
        }
       i++;
       j = 0;
    }
    return (x);
}

int check_error_2(t_data *stack)
{
    int i = 0;
    int j = 0;
    int cond = 0;
    while (stack[j].val)
    {
        while (stack[i].val)
        {
            if (stack[j].val == stack[i].val && j != i)
            {
                cond++;
            }
        i++;
        }
        i = 0;
        j++;
    }
    return (cond);
}

int check_error_glob(int a_rgc, char **a_rgv, t_data *lol)
{
  if (check_error_1(a_rgv,a_rgc) == 0)
    {
      lol = fill_stack(a_rgv);
    
    if (check_error_2(lol) == 0)
    {
        return (0);
    }
    }
    return (1);
}