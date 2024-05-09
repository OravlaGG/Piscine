/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:38:29 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/10 12:08:09 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		i = 0;
		while (str[c + i] == to_find[i])
		{
			if (to_find[i +1] == '\0')
			{
				return (&str[c]);
			}
			i++;
		}
		c++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "abcDEFghijklmDEFnopqrstuvwxyz";
	char fnd[] = "1";
	//char fnd[] = "DEF";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}*/
