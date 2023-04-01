/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:11:37 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/31 18:35:07 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	long_atoi(const char *str)
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

int	check_error_1(char **a_rgv, int a_rgc)
{
	int	i;
	int	j;
	int	x;

	i = 1;
	x = 0;
	if (a_rgc == 1)
		x++;
	while (a_rgv[i])
	{
		j = 0;
		while (a_rgv[i][j])
		{
			if ((a_rgv[i][j] > '9' || a_rgv[i][j] < '0') && a_rgv[i][j] != ' ' )
				x++;
			if ((a_rgv[i][j] == '-' || a_rgv[i][j] == '+')
				&& (a_rgv[i][j - 1] == ' ' || j == 0) && (a_rgv[i][j + 1] <= '9'
					&& a_rgv[i][j + 1] >= '0'))
				x--;
			j++;
		}
		i++;
	}
	return (x);
}

int	check_error_2(t_data *stack)
{
	int	i;
	int	j;
	int	cond;

	j = 0;
	cond = 0;
	while (stack[j].pos)
	{
		i = 0;
		while (stack[i].pos)
		{
			if (stack[j].val == stack[i].val && j != i)
				cond++;
		i++;
		}
		j++;
	}
	return (cond);
}

int	check_long(char **str)
{
	int	i;
	int	j;
	int	lol;

	j = 1;
	lol = 0;
	while (str[j])
	{
	i = 0;
		while (str[j][i])
		{
			if (str[j][i] == ' ')
				i++;
			else
			{
				if (long_atoi(&str[j][i]) > 2147483647
					|| long_atoi(&str[j][i]) < -2147483648)
					lol++;
				while (str[j][i] != ' ' && str[j][i])
					i++;
			}
		}
	j++;
	}
	return (lol);
}

int	check_error_glob(int a_rgc, char **a_rgv, t_data *lol)
{
	if (check_error_1(a_rgv, a_rgc) == 0)
	{
		lol = fill_stack(a_rgv, lol);
		if (check_error_2(lol) == 0 && get_lenght(lol) != 0
			&& check_long(a_rgv) == 0)
		{
			return (0);
		}
	}
	return (1);
}
