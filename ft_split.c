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
	size_t	i;
	char	**arr;
	size_t	j;

	if ((arr = (char **)malloc((count_substr(s, c) + 1) * sizeof(char *))) == NULL)
		return (NULL);
	i = -1;
	while (*s && ++i < (size_t)count_substr(s, c))
	{
		if (*s == c)
			s++;
		else
		{
			arr[i] = copysubstr(s, c);
			if (arr[i] == NULL)
			{
				j = -1;
				while (++j < i)
					free(arr[j]);
				free(arr);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

/* #include <stdio.h>
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
	@@ -130,4 +137,4 @@
	free(s);

	return (0);
} */
