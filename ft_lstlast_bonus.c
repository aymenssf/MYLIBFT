/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:51:13 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:05:25 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

/* #include <stdio.h>
int	main(void)
{
		t_list *L = NULL;
		t_list *n1 = ft_lstnew("aymen");
		t_list *n2 = ft_lstnew("assaf");
		ft_lstadd_front(&L, n1);
		ft_lstadd_front(&L, n2);
		t_list *last = ft_lstlast(L);
		printf("%s", (char *)last -> content);
}  */
