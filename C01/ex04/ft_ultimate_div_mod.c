/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:15:00 by igoh              #+#    #+#             */
/*   Updated: 2023/07/02 19:34:20 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int	main()
{
	int a = 15;
	int b = 4;

	printf("Before: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("After: a = %d, b = %d\n", a, b);

	return 0;
}
*/
