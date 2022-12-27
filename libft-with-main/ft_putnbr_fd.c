/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalik <ibalik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:44:05 by ibalik            #+#    #+#             */
/*   Updated: 2022/12/06 15:44:12 by ibalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	c;
	printf("%lu\n", sizeof(int));
	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * sign, fd);
	c = '0' + n % 10 * sign;
	ft_putchar_fd(c, fd);
}

int main(int argc, char const *argv[])
{
	char *c = "efe3.txt";
	char *i3 = (char *) calloc(3, sizeof(char));

	int i = open(c, O_RDWR | O_CREAT);
	ft_putnbr_fd(775, i);
	close(i);
	open(c, O_RDONLY);
	read(i, i3, 3);
	printf("%s", i3);
	return 0;
}