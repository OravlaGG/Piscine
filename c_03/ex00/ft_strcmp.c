/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:42:26 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/08 09:08:51 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
/*
#include <stdio.h>
int main(void)
{
	char	s1[] = "Hola";
	char	s2[] = "Hoila";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
