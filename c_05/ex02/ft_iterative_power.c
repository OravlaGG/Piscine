/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:57:44 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/14 09:34:23 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	c;

	c = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (c < power)
	{
		result = result * nb;
		c++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 10));
	return (0);
}*/
