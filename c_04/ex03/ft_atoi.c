/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:45:51 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/11 09:12:04 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	n;

	c = 0;
	s = 1;
	n = 0;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] <= '9' && str[c] >= '0' && str[c] != '\0' )
	{
		n = n * 10 + (str[c] - '0');
		c++;
	}
	return (n * s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "  ---+-+1234567";
	printf("%d", ft_atoi(str));
	return (0);
}*/
