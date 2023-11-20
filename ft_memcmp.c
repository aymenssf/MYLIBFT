/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:14:38 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/20 09:47:43 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (ps1[i] > ps2[i])
			return (ps1[i] - ps2[i]);
		else if (ps1[i] < ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "AyMen";
	char s2[] = "Ayeenare";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d", memcmp(s1, s2, 3));
} */
