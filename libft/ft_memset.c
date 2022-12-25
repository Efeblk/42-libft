/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:09:43 by ibalik            #+#    #+#             */
/*   Updated: 2022/10/06 16:14:11 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int src, size_t len)
{
	void	*ret;

	ret = dest;
	while (len--)
		*(char *)dest++ = (unsigned char)src;
	return (ret);
}
