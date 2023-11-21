/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:35 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/21 17:57:02 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_substr(char const *s, char c)
{
	int		i;
	size_t	size_substr;

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
	while (s[len] && s[len] != c)
		len++;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static char	**free_arr(char **arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	totsubstr;
	size_t	i;
	char	**arr;

	totsubstr = count_substr(s, c);
	arr = (char **)malloc((totsubstr + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s && i < totsubstr)
	{
		if (*s == c)
			s++;
		else
		{
			arr[i] = copysubstr(s, c);
			if (arr[i] == NULL)
				return (free_arr(arr, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
