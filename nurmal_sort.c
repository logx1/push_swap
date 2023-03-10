/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nurmal_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:32:02 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/10 09:58:56 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void nurmal_sort(t_data *lol)
{
    int i = 0;
    int j = 0;
    int end = git_big_pos(lol);
    int len = 0;
    
    int tmp = 0;
    while(i < end)
    {
        while(j < end)
        {
            if(lol[j].val > lol[j + 1].val)
            {
                tmp = lol[j].val;
                lol[j].val = lol[j + 1].val;
                lol[j + 1].val = tmp;
                
            }
            len++;
            j++;
        }
        j = 0;
        i++;
    }
}

// int main(int argc, char **argv)
// {
//     (void)argc;
//     t_data *lol;
//     lol = fill_stack(argv);
//     nurmal_sort(lol);
//     sprint(lol);

//     return (0);
// }