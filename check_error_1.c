/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:11:37 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/02/28 13:10:41 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int check_one(char **a_rgv, int a_rgc)
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

// int main(int argc, char **argv)
// {

// printf("=====%d",check_one(argv, argc));


//     return (0);
// }