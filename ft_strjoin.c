/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:14:28 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:06:02 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*ptr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(s1_len + s2_len) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] && i < s1_len && j < (s1_len + s2_len))
	{
		ptr[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] && i < s2_len && j < (s1_len + s2_len))
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return ((char *)ptr);
}

/* #include <stdio.h>
int	main(void)
{
	const char tab[] = "aymen";
	const char s[] = "af";
	printf("%s", ft_strjoin(tab, s));
		// printf("%s", strjoin(tab, s));
		return (0);
} */