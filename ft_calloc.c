/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:11 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/06 11:26:19 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size)
{
        size_t     i;
        char    *ptr;

	    i  = 0;
        
        if(num_elements == 0 || element_size == 0)
                return(NULL);
        ptr = (char *)malloc(num_elements * sizeof(element_size));
        ft_bzero(ptr, (num_elements * element_size));
        return(ptr);
}

/* int main() {
    int num_elements = 5;
    int *array;
    array = (int *)ft_calloc(num_elements, 1);

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

    return 0;
} */