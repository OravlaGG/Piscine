/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:15:49 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/18 12:39:59 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	c;

	c = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[c] = min;
		min++;
		c++;
	}
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
	int	*t;
	int c;

	c = 0;
	t = ft_range(1, 5);
	while (c < 4)
	{
		printf("%d, ", t[c]);
		c++;
	}
	return (0);
}
*/
