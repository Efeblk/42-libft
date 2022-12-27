/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:38:02 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/06 15:46:40 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}

void f(unsigned int a, char *c)
{
	c[0] -= 32;
}

int main(int argc, char const *argv[])
{
	char c[] = "efe balik";
	ft_striteri(c, f);
	printf("%s", c);
	return 0;
}
