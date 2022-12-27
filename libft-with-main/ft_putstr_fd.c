/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:41:35 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/06 15:46:20 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

int main(int argc, char const *argv[])
{
	char *c = "efe2.txt";
	char *c2 = (char *) calloc(15, sizeof(char));
	int i = open(c, O_RDWR | O_CREAT);


	ft_putstr_fd("efe balik", i);
	close(i);
	open(c, O_RDONLY);
	read(i, c2, 5);
	printf("%s", c2);
	return 0;
}