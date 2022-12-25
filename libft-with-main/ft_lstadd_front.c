/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:30:53 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/13 13:31:00 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list lst4;
	lst4.content = "balik";
	lst4.next = NULL;
	t_list *lst3 = &lst4;

	t_list lst2;
	lst2.content = "efe";
	lst2.next = NULL;
	t_list *lst1 = &lst2;


	t_list **rlst = &lst1;
	
	ft_lstadd_front(rlst, lst3);
	while (*rlst)
	{
		printf("%s", (char *) (*rlst)->content);
		*rlst = (*rlst)->next;
	}	
	return 0;
}