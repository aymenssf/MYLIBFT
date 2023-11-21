/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:11 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/21 11:21:04 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*ptr;

	if (num_elements && ((size_t)-1 / num_elements) < element_size)
		return (NULL);
	ptr = (char *)malloc(num_elements * element_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num_elements * element_size));
	return (ptr);
}
