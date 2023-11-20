/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:15:58 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/20 09:45:49 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char s[] = "SBAAAa3";
	size_t n = 6;
	int c = 'a';
	void *res = memchr(s, c, n);
	void *myres = ft_memchr(s, c, n);
	printf("%s", (char *)res);
	printf("%s", (char *)myres);
} */
