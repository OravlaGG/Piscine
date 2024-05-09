/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:11:25 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/06 16:20:35 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "123i4";
	char	src[]  = "a1cdeF";
	printf("%d", ft_str_is_numeric(dest));
	printf("%d", ft_str_is_numeric(src));
	printf("%d", ft_str_is_numeric(""));
	return (0);
}*/
