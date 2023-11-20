/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:11 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/20 15:46:55 by aassaf           ###   ########.fr       */
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
/* #include <stdio.h>
int	main(void) {
	int num_elements = 0;
	int *array;
	array = ft_calloc(num_elements,10);
	printf("%lu", sizeof(array));
	if (array != NULL) {
		for (int i = 0; i < num_elements; ++i) {
			array[i] = i * 10;
		}
		printf("Initialized Array: ");
		for (int i = 0; i < num_elements; ++i) {
			printf("%d ", array[i]);
		}
		printf("\n");
		free(array);
	} else {
		printf("allocation failed.\n");
	}

	return (0);
} */
