#include <stdio.h>
# include <stdlib.h>

int	main()
{
	char	str[] = "abc    .         def ghi jkl";
	char	str_null[4] = "";
	char	**ret_str;
	long unsigned int	index;

	ret_str = ft_split(str, ' ');
	printf("\n\033[92m-----------------------\033[0m\n");
	printf("str -> %s\nsep -> ' ' -> space\n\n", str);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split(str, 'e');
	printf("str -> %s\nsep -> 'e'\n\n", str);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split(str, 'k');
	printf("str -> %s\nsep -> 'k'\n\n", str);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split(str, '\0');
	printf("str -> %s\nsep -> '\\0'\n\n", str);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split(str, 'y');
	printf("str -> %s\nsep -> 'y'\n\n", str);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split(str_null, 'y');
	printf("str -> %s\nsep -> 'y'\n\n", str_null);
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);

	ret_str = ft_split("1-2-3-4-5-6-7-8--8-8--8-4------4--4", '-');
	printf("str -> 1-2-3-4-5-6-7-8--8-8--8-4------4--4\nsep -> '-'\n\n");
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n");
	free(ret_str);
	
	ret_str = ft_split("--1-2-3-4-5-6-7-8--8-8--8-4------4--4", '-');
	printf("str -> --1-2-3-4-5-6-7-8--8-8--8-4------4--4\nsep -> '-'\n\n");
	index = 0;
	while (ret_str[index])
	{
		printf("split %2.lu -> %s\n", index + 1, ret_str[index]);
		++index;
	}
	printf("\033[92m-----------------------\033[0m\n\n");
	free(ret_str);
	return (EXIT_SUCCESS);
}