/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 03:15:27 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/21 11:41:16 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_num(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	tmp;
	size_t	count;

	tmp = n;
	count = count_num(tmp);
	if (n < 0)
	{
		tmp *= -1;
		count++;
	}
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (count--)
	{
		res[count] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
