/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:31:41 by igoh              #+#    #+#             */
/*   Updated: 2023/07/02 21:15:38 by titan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	unique_board(int r_c_t[3], int **grid, int size);
int isvisible(int line[], int size, int fromstart);
void ft_putchar(char c);
void ft_putstr(char *str);
void	print_board(int **board, int size);
int	*get_col(int **grid, int col, int size);

int	possible(int **grid, int *expt_box, int *r_c_t, int size)
{
	int cond_1;
	int cond_2 = 1;
	int cond_3 = 1;
	int row = r_c_t[0];
	int col = r_c_t[1];
	int guess = r_c_t[2];
	int left_read;
	int right_read;
	int top_read;
	int down_read;
	cond_1 = unique_board(r_c_t, grid,size);
	if (col == (size - 1))
	{
		left_read = row + (size * 2) ;
		right_read = row + (size * 3);
		grid[row][col] = guess;
		if((isvisible(grid[row],size,1)==expt_box[left_read]
					&&isvisible(grid[row],size,0) == expt_box[right_read]))
			cond_2 = 1;
		else
		{
			cond_2 = 0;
			grid[row][col] = 0;
		}
	}
	if (row == (size - 1))
	{
		top_read = col ;
		down_read = col + (size * 1);
		grid[row][col] = guess;
		if ((isvisible(get_col(grid,col,size),size,1) ==expt_box[top_read]
				&&isvisible(get_col(grid,col,size),size,0) == expt_box[down_read]))
				cond_3 = 1;
		else
		{
			cond_3 = 0;
			grid[row][col] = 0;
		}
	}
	return (cond_1 && cond_2 && cond_3);
}



int** solver(int **grid, int *expt_box, int size,int *flag)
{
	int row = 0;
	int col = 0;
	int guess = 1;
	int r_c_t[3];
	while (row < size)
	{
		while (col < size)
		{
			if (grid[row][col] == 0)
			{
				while (guess < size + 1)
				{
					r_c_t[0] = row;
					r_c_t[1] = col;
					r_c_t[2] = guess;
					if (possible(grid,expt_box,r_c_t,size))
					{
						grid[row][col] = guess;
						if (row == (size - 1) && col == (size - 1))
						{
							*flag = 1;
							print_board(grid, size);
							break;
						}
						grid = solver(grid,expt_box,size,flag);
						grid[row][col] = 0;

					}
					guess++;
				}
				return grid;
			}
			col++;
		}
		col = 0;
		row++;
	}
	return grid;
}
