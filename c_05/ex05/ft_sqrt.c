/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:32:55 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/13 14:51:56 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}*/
