/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:28:12 by igoh              #+#    #+#             */
/*   Updated: 2023/07/08 16:51:51 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(i - 1);
		return (result);
	}
}
