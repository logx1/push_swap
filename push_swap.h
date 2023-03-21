/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:10 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/21 06:43:29 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
typedef struct s_data
{
    int val;
    int pos;
    
}t_data;

int check_error_1(char **a_rgv, int a_rgc);
t_data *fill_stack(char **str);
int check_error_2(t_data *stack);
int check_error_glob(int a_rgc, char **a_rgv, t_data *lol);
void sprint(t_data *lol);
void ft_s(t_data *stack);
void  ft_r(t_data *stack);
void ft_rr(t_data *stack);
int git_big_pos(t_data *stack);
void nurmal_sort(t_data *lol);
int ft_word_count(char **str, char c);
void ft_push_a(t_data *stack_a, t_data *stack_b);
void ft_push_b(t_data *stack_a, t_data *stack_b);
void sort_three(t_data *stack_a);
void sort_lol(t_data *stack_a, t_data *stack_b);
void my_sort(t_data *stack_a,t_data *stack_b);
int get_the_closer(t_data *stack);
void final_sort(t_data *stack_a, t_data *stack_b);
void send_small_halv(t_data *stack_a, t_data *stack_b);
int get_lenght(t_data *stack);
void sort_100(t_data *stack_a, t_data *stack_b);
void sort_500(t_data *stack_a, t_data *stack_b);
#endif