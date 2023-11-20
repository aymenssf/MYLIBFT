/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:59:12 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/20 11:32:59 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	ft_memset(s, 0, size);
}

/* #include <stdio.h>
int	main(void)
{
	char s[] = "222";
	bzero(s, sizeof(char) * 3);
	printf("%d\t%d\t%d", s[0], s[1], s[2]);
} */
