/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:43:42 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/09 12:50:27 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_if_sorted(t_data *lol)
{
    int i = 0;
    int index = 0;

    while (lol[i].val)
    {
        if (lol[i].val > lol[i + 1].val)
        {
            index++;
        }
        i++;
    }
    // if the function return 0 or 1 than is true
    return (index);
}

// int main(int argc, char **argv)
// {
//     (void)argc;
//     t_data *lol;
//     lol = NULL;
//     lol = fill_stack(argv);

//     printf("%d",check_if_sorted(lol));
//     // sprint(lol);
    
//     return (0);
// }