/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:56:14 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/09 16:17:01 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	c;	
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Kenkro besto misty";
	char	src[] = "mondongo";
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
