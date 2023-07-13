/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:02:07 by igoh              #+#    #+#             */
/*   Updated: 2023/06/26 19:58:45 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_3comb(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 8)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write_3comb(a, b, c);
				if (a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main()
{
	ft_print_comb();
	return 0;
}
*/
