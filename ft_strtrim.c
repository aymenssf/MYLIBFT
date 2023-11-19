/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:30:40 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/19 21:31:04 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		--len;
	return (ft_substr(s1, 0, (len + 1)));
}

/* #include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    const char *str = "  aymen   ";
    const char *s = " ";

    char *trimmedStr = ft_strtrim(str, s);

    if (trimmedStr != NULL)
    {
        printf("Original String: \"%s\"\n", str);
        printf("Trimmed String:   \"%s\"\n", trimmedStr);

        free(trimmedStr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
