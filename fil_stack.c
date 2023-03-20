/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fil_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:49:21 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/13 08:02:33 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_word_count(char **str, char c)
{
    int count;
    int i;
    int j;

    i = 0;
    j = 1;
    count = 0;

while (str[j])
{
    while (str[j][i])
    {
        if (str[j][i] == c)
        {
            i++;
        }else
        {
            count++;
            while (str[j][i] != c && str[j][i])
            {
                i++;
            }
        }
    }
    j++;
    i = 0;
}
    return (count);
}

t_data *fill_stack(char **str)
{
    t_data *lol ;
    lol = malloc(sizeof(t_data) * ft_word_count(str, ' ') + 1);
    int count = 0;
    int i = 0;
    int j = 1;

while (str[j])
{
    while (str[j][i])
    {
        if (str[j][i] == ' ')
        {
            i++;
        }else
        {
            lol[count].val = ft_atoi(&str[j][i]);
            lol[count].pos = 0;
            count++;
            while (str[j][i] != ' ' && str[j][i])
            {
                i++;
            }
        }
    }
    j++;
    if (!str[j])
    {
        lol[--count].pos = 1;
    }
    
    i = 0;
}
return (lol);
}


// int main(int argc,char **argv)
// {
//     (void)argc;
//     t_data *lol;
//     int i = 0;
    
//     lol = fill_stack(argv);
//     while (lol[i].pos == 0)
//     {
//         printf("%d\n",lol[i].val);
//         i++;
//     }
//      printf("%d\n",lol[i].val);


//     return (0);
// }