/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 03:15:27 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/11 18:28:12 by aassaf           ###   ########.fr       */
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
/* 
#include <stdio.h>

int	main(void) {
    	int test_cases[] = {123, -456, 0, 987654321, -2147483648};
    	int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
	int i = 0;
    	while (i < num_tests) {
        	int num = test_cases[i];
        	char *result = ft_itoa(num);
		printf("Result for %d: %s\n", num, result);
		i++;
		free(result);
    	}
    	return (0);
} */