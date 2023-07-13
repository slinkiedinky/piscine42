/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:30:01 by igoh              #+#    #+#             */
/*   Updated: 2023/06/28 18:01:27 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	value1;
	int	value2;

	value1 = 1;
	value2 = 3;

	printf("Before swapping: value1 = %d, value2 = %d\n", value1, value2);

	ft_swap(&value1, &value2);

	printf("After swapping: value1 = %d, value2 = %d\n", value1, value2);
	return 0;
}
*/
