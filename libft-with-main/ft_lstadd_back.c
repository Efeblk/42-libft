/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:38:39 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/13 13:38:46 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
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
	

	ft_lstadd_back(rlst, lst3);
	while (*rlst)
	{
		printf("%s", (char *) (*rlst)->content);
		*rlst = (*rlst)->next;
	}	
	return 0;
}