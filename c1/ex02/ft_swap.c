/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:26:39 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/04 15:54:18 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;

	b = 0;
	a = 42;
	ft_swap(&a, &b);
	printf("%d" "%d", a, b);
	return (0);
}*/
