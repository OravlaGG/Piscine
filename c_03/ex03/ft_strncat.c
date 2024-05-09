/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:21:32 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/09 16:37:05 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
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
	unsigned int	s = 10;
	char			dest[] = "mondongo";
  	char			src[] = "abcdefghi";	

	ft_strncat(dest, src, s);
	printf("%s", dest);
	return (0);
}*/
