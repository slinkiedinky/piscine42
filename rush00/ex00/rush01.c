/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaloh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:31:27 by jaloh             #+#    #+#             */
/*   Updated: 2023/06/25 20:55:22 by aang-shu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	row(int x, char *vals)
{
	int		i;

	i = 0;
	if (x == 1)
		ft_putchar(vals[0]);
	if (x == 2)
	{
		ft_putchar(vals[0]);
		ft_putchar(vals[2]);
	}
	if (x > 2)
	{
		ft_putchar(vals[0]);
		while (i < x - 2)
		{
			ft_putchar(vals[1]);
			i++;
		}
		ft_putchar(vals[2]);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	if (y == 1)
		row(x, "/*\\");
	if (y == 2)
	{
		row(x, "/*\\");
		row(x, "\\*/");
	}
	if (y > 2)
	{
		row(x, "/*\\");
		while (j < y - 2)
		{
			row(x, "* *");
			j++;
		}
		row(x, "\\*/");
	}
}
