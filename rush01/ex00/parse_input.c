/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:56:17 by igoh              #+#    #+#             */
/*   Updated: 2023/07/02 17:27:24 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_num(char c);

int	count_param(char *str)

{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (is_num(*str))
			i++;
		str++;
	}
	return (i);
}

int	*parse_params(char *str)
{
	int	len;
	int	read;
	int	*exp_box;
	int	*exp_box_st;

	len = count_param(str);
	exp_box = (int *) malloc (sizeof(int) * (len + 1));
	exp_box_st = exp_box;
	while (*str)
	{
		if (is_num (*str))
		{	
			read = *str - '0';
			*exp_box = read;
			exp_box++;
		}
		str++;
	}
	*exp_box = 0;
	return (exp_box_st);
}
