/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:56:03 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/04 18:53:48 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 9;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d" " " "%d", div, mod);
	return (0);
}*/
