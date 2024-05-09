/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:38:58 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/18 10:15:05 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		c;
	int		size;

	size = 0;
	c = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s", ft_strdup(argv[1]));
	return (0);
}*/
