/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:31:17 by igoh              #+#    #+#             */
/*   Updated: 2023/07/02 19:44:12 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/*
int	main()
{
	char	str[14];
	int	length;

	strcpy(str, "Hello, world!");
	length = ft_strlen(str);
	printf("The length is: %d\n", length);
	return 0;
}
*/
