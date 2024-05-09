/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:21:37 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/06 16:25:38 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	dest[] = "hola";
	char	src[]  = "abcdeF";
	printf("%d", ft_str_is_lowercase(dest));
	printf("%d", ft_str_is_lowercase(src));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}*/
