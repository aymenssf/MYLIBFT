/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:35 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 16:21:32 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substr(char const *s, char c)
{
	int	i;
	int	size_substr;

	i = 0;
	size_substr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size_substr++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (size_substr);
}

static char	*copysubstr(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*substr;

	i = 0;
	len = 0;
	while (*s == ' ')
		s++;
	while (s[len] && s[len] != c)
		len++;
	substr = (char *)malloc(len + 1);
	if (substr != NULL)
	{
		while (i < len)
		{
			substr[i] = s[i];
			i++;
		}
		substr[i] = '\0';
	}
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	size_t subs;
	size_t	i;
	char	**arr;
	size_t	j;

	subs = count_substr(s, c);
	arr = (char **)malloc(( subs + 1) * sizeof(char *));
	if(arr == NULL)
		return (NULL);
	i = 0;
	while (*s && i < subs)
	{
		if (*s == c)
			s++;
		else
		{
			arr[i] = copysubstr(s, c);
			if (arr[i] == NULL)
			{
				j = 0;
				while (j < i)
				{
					free(arr[j]);
					j++;					
				}
				free(arr);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

#include <stdio.h>
int	main(void)
{
	char **s;
	int i = 0;

	// Test case 1
	s = ft_split("        Hello-World", '-');
	printf("Test Case 1:\n");
	while (s[i] != NULL)
	{
		printf("%s\n", s[i]);
		i++;
	}

	// Free allocated memory
	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);

	// Test case 2
	i = 0;
	s = ft_split("This,is,a,test", ',');
	printf("\nTest Case 2:\n");
	while (s[i] != NULL)
	{
		printf("%s\n", s[i]);
		i++;
	}

	// Free allocated memory
	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	free(s);

	return (0);
}
