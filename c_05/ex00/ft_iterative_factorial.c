/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:04:01 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/13 09:26:12 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (fact);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	a = 5;
	printf("%d", ft_iterative_factorial(a));
	return (0);
}*/
