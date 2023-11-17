/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:35:51 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:04:13 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (f == NULL || s == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include <stdlib.h>

// void	ft_striteri_ft(unsigned int	i, char	*c)
// {
// 	*c = *c + i;
// }

// int	main(void)
// {
// 	char	str0[] = "Hello world";
// 	char	str1[] = "1337 Benguerir";
// 	char	str2[] = "";
// 	char	str3[] = "0000000000";
// 	char	str4[] = "0000000000";

// 	ft_striteri(str0, ft_striteri_ft);
// 	ft_striteri(str1, ft_striteri_ft);
// 	ft_striteri(str2, ft_striteri_ft);
// 	ft_striteri(str3, ft_striteri_ft);
// 	ft_striteri(str4, 0);
// 	printf("%s\n", str0);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// 	printf("%s\n", str4);
// 	return (EXIT_SUCCESS);
// }