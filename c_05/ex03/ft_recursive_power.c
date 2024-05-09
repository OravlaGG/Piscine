/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:38:43 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/13 11:51:18 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(5, 3));
	return (0);
}*/
