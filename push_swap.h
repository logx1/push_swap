/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:10 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/02/28 19:28:42 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
typedef struct s_data
{
    int val;
    int pos;
    
}t_data;


int check_one(char **a_rgv, int a_rgc);
t_data *fill_stack(char **str);




#endif