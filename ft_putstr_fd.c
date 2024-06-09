/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:40:14 by mel-hime          #+#    #+#             */
/*   Updated: 2023/12/30 16:51:46 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	int fd = open("test.txt", O_CREAT|O_RDWR, 0777);
// 	printf("%d\n", fd);
// 	char s[] = "the joker is here";
// 	ft_putstr_fd(s, fd);
// 	close(fd);
// }