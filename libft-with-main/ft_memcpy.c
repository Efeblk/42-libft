/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:53:08 by ibalik            #+#    #+#             */
/*   Updated: 2022/10/06 16:53:26 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (ret);
}

int main (void)
{
	char efe[] = "efe balik abcd";
	char ahmet[] = "ahmet";

	printf("%s\n", efe);	
	ft_memcpy(efe +6 , efe, 8);
	printf("%s", efe);
	
	return 0;
}
