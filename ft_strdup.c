/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:07:17 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:08:35 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	char	*d;

	i = 0;
	d = ((new = malloc(sizeof(char) * ft_strlen(s) + 1)));
	if (!d)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* #include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strdup(av[1]));
		printf("%s", strdup(av[1]));
	}
} */