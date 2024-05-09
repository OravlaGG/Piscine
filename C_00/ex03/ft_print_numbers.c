/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:40:46 by alvargom          #+#    #+#             */
/*   Updated: 2024/02/29 15:45:03 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb >= '0' && numb <= '9')
	{
		write(1, &numb, 1);
		numb ++;
	}
