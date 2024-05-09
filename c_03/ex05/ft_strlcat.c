/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:53:42 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/10 12:44:22 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	if (size <= a)
		b = b + size;
	else
		b = b + a;
	while (src[c] != '\0' && (a + 1) < size)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (b);
}
/*
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char	dest[100] = "abcdefgjiu";
	char	src[] = "mondongo";

	printf("%d", ft_strlcat(dest, src, 100));
	printf("\n %s", dest);
	return (0);
}*/
