/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:56:39 by igoh              #+#    #+#             */
/*   Updated: 2023/07/03 15:36:30 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	int array[] = {5, 3, 1, 4, 2};
	int size = sizeof(array) / sizeof(array[0]);

	ft_sort_int_tab(array, size);

	int i = 0; 
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return 0;
}

