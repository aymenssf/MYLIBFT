/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:58:13 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:06:19 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	int	i;

	size = ft_strlen(s);
	i = size - 1;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
		char t[] = "ayman";
		int c = 'a';
		char *result = ft_strrchr(t, c);
		printf("%s", result);
} */