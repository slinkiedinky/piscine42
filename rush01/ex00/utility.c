/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:24:19 by titan             #+#    #+#             */
/*   Updated: 2023/07/02 21:16:52 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	is_num(char c)
{
	return ('0' <= c && c <= '9');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_board(int **board, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (board != NULL)
	{
		while (i < size)
		{
			while (j < size)
			{
				ft_putchar(board[i][j] + '0');
				if (j != size - 1)
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
}

int	*get_col(int **grid, int col, int size)
{
	int	ctr;
	int	*col_arr;

	ctr = 0;
	col_arr = (int *) malloc(size * sizeof(int));
	while (ctr < size)
	{
		col_arr[ctr] = grid[ctr][col];
		ctr++;
	}
	return (col_arr);
}
