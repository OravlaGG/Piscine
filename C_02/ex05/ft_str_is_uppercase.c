/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:26:27 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/06 16:29:36 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	dest[] = "HOLA";
	char	src[]  = "abcdeF";
	printf("%d", ft_str_is_uppercase(dest));
	printf("%d", ft_str_is_uppercase(src));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}*/
