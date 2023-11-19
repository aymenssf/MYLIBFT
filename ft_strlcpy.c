/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:37 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/03 13:07:26 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if(size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/* 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	char src[] = "DONT PANIC";
	char dest[10] = "";
	unsigned int n = 0;

	printf("%zu", strlcpy(dest, src, n));
	printf("%s", dest);
} */