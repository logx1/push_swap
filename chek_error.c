/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:30:31 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/02/27 18:58:46 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_word_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

char *fill(char *stack_a , char **a_rgv)
{
    int i = 1;
    int j = 0;
    int big_size = 0;
    while (a_rgv[i])
    {
        while (a_rgv[i][j])
        {
            stack_a[big_size] = a_rgv[i][j];
            big_size++;
            j++;
        }
       
        
        j = 0;
        i++;
            stack_a[big_size] = ' ';
            big_size++;
        
    }
    return (stack_a);
}

// int *conv(char *)

char *chek_error(char **a_rgv, int a_rgc, char *stack_a)
{
    int big_size = 0;
    int i = 1;
    int j = 0;
    int k = 0;
   if (a_rgc >1)
{
while (a_rgv[i] != '\0')
{
  while (a_rgv[i][j])
  {
    big_size++;
    if ((a_rgv[i][j] < '0' || a_rgv[i][j] > '9') && a_rgv[i][j] != ' ' )
    {
        k = a_rgc + 1;
        break;
    }
    j++;
  }
  j = 0;
    if (k == a_rgc +1)
    {
        break;
    }
    i++;
}
}
stack_a = (char *)malloc(sizeof(char ) * big_size +1);

    if (k == a_rgc +1)
    {
        printf("hello error \n");
        free(stack_a);
    }
 
 return (fill(stack_a, a_rgv));
}
int *to_int(char *stack_a)
{
    int *stack_of_int;
    char **for_split;
    int i = 0;
    for_split = ft_split(stack_a, ' ');
    int lengh = ft_word_count(stack_a , ' ');
    stack_of_int = malloc(sizeof(int) * lengh + 1);
    while (i < lengh)
    {
        stack_of_int[i] = ft_atoi(for_split[i]);
        printf("%d\n",stack_of_int[i]);
        i++;
        
    }
    return (stack_of_int);
}

int main(int argc, char *argv[])
{

char *stack_a;
int *lol;
stack_a = NULL;
stack_a = chek_error(argv, argc,stack_a);
lol = to_int(stack_a);


    return (0);
}