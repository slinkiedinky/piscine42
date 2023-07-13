/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:41:24 by igoh              #+#    #+#             */
/*   Updated: 2023/07/11 14:04:34 by igoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	seplen;

	len = 0;
	seplen = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += seplen;
		i++;
	}
	return (len);
}

void	ft_fill_result(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	len = ft_total_len(size, strs, sep);
	result = malloc(len + 1);
	ft_fill_result(result, size, strs, sep);
	return (result);
}
