/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:59:36 by igoh              #+#    #+#             */
/*   Updated: 2023/06/28 18:02:04 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	x;
	int	y;

	ft_div_mod(7, 2, &x, &y);
	printf("The result is :Division %d, Remainder %d\n", x, y);	
	return 0; 
}
*/
