/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:29:04 by titan             #+#    #+#             */
/*   Updated: 2023/07/02 21:04:13 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*parse_params(char *str);
void	ft_putchar(char c);
int		**solver(int **grid, int *expt_box, int size, int *flag);
int		count_param(char *str);
int		ft_putstr(char *str);

int	**init_grid(int size)
{
	int	ctr;
	int	ctr2;
	int	**grid;

	ctr = 0;
	ctr2 = 0;
	grid = (int **)malloc(size * sizeof(int *));
	while (ctr < size)
	{
		grid[ctr] = (int *)malloc(size * sizeof(int));
		while (ctr2 < size)
		{
			grid[ctr][ctr2] = 0;
			ctr2++;
		}
		ctr++;
	}
	return (grid);
}

int	main(int argc, char *argv[])
{
	int	*exp_box;
	int	size;
	int	**arr;
	int	*flag;

	if (argc == 2)
	{
		exp_box = parse_params(argv[1]);
		size = count_param(argv[1]) / 4;
		arr = init_grid(size);
		flag = malloc(sizeof(int) * 1);
		*flag = 0;
		arr = solver(arr, exp_box, size, flag);
		if (*flag)
			ft_putstr("Solution found\n");
		else
			ft_putstr("Error");
		free(arr);
	}
	else
		ft_putstr("Need to have only 1 argument");
}
