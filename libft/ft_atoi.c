/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:13:53 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/20 17:13:43 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	rus;
	long	i;
	int		sign;

	i = 0;
	rus = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		rus = (rus * 10) + str[i] - 48;
		i++;
	}
	return (rus * sign);
}
