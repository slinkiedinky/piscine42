/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:12:54 by igoh              #+#    #+#             */
/*   Updated: 2023/07/02 19:42:23 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
int	main()
{
	int array[] = {1, 2, 3, 4, 5};
	int size = sizeof(array) / sizeof(array[0]);

	ft_rev_int_tab(array, size);

	int i = size - 1;
	while (i >= 0) 
	{
	printf("%d ", array[i]);
	i--;
	}
	
	return 0; 
}
*/
