/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:29:59 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/11 22:33:07 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char *str;
        unsigned int i;

        i = 0;
        if(s == NULL || f == NULL)
                return (NULL);
        str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
        if(str == NULL)
                return (NULL);
        while(s[i])
        {
                str[i] = f(i, s[i]);
                i++;
        }
        str[i] = '\0';
        return(str);
}

/* #include <stdio.h>
char	ft_strmapi_ft(unsigned int	i, char	c)
{
	return (c + i);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[] = "Hello world";
	char	str1[] = "1337 BENGUERIR";
	char	str2[] = "";
	char	str3[] = "0000000000";

	printf("%s\n", ft_strmapi(str0, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str1, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str2, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str3, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(0, ft_strmapi_ft));
	return (EXIT_SUCCESS);
} */