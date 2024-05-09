/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:57:59 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/07 13:58:16 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
