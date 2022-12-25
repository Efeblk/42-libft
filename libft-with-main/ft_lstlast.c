/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:36:30 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/13 13:36:41 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
	t_list	*rtmp;
	t_list tmp;
	t_list tmp2;

	tmp.content = "efe";
	tmp2.content = "balik";

	rtmp = &tmp;
	tmp.next = &tmp2;
	tmp2.next = NULL;
	while(rtmp) 
	{
		printf("%s", (char *) rtmp->content);
		rtmp = rtmp->next;
	}
	return 0;
}*/