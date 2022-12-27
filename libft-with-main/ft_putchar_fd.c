/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:39:30 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/06 14:39:35 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>  
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{
	char *c = "efe.txt";
	int i2;
	char *c2 = (char *) calloc(10,(sizeof(char)));
	int i = open(c, O_RDWR | O_CREAT);
	ft_putchar_fd('e', i);

	ft_putchar_fd('a', i);
	i2 = read(i, c2, 1);
	printf("%s", c2);
	return 0;
}*/