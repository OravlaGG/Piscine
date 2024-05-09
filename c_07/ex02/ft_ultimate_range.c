/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:59:30 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/18 16:15:18 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = max - min;
	result = malloc(sizeof(int) * (c));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	c = 0;
	while (max > min)
	{
		result[c] = min;
		min++;
		c++;
	}
	return (c);
}
/*

int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
