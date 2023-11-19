/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:27:19 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:06:26 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen((char *)s);
	if(start >= slen)
		return (ft_strdup(""));

	if(slen - start > len)
		ptr = (char *)malloc((len + 1) * sizeof(char));
	else
		ptr = (char *)malloc(sizeof(char) * (slen - start + 1));
	if(!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, (len + 1));
	return (ptr);
}

/* #include <stdio.h>
int	main(void)
{
		char str[] = "Hello World!";
		size_t len = 7;
		unsigned int s = 0;
		printf("%s\n", ft_substr(str, s, len)); // prints "World!"
} */
