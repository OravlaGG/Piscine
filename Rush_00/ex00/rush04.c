/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:28:37 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/03 13:32:52 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	medio;

	medio = 0;
	ft_putchar('A');
	while (x > 2 && medio < x - 2)
	{
		ft_putchar('B');
		medio++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}
/*	The function 'first_line' prints the characters that you give in each 
 *	ft_putchar. The first ft_putchar print the left character. The second 
 *	one needs the variable x and medio variable to determine how many middle 
 *	character we need. We put the conditions that x has to be higher than 2 
 *	so it can start the loop and 'medio = x - 2'(It is'x - 2' because there 
 *	is one left and one right character)to end it (We give medio 0 as its 
 *	value and add 1 right before it reach the end so it can exit the while 
 *	right before it reach the last character). The last ft_putchar only 
 *	prints if x is higher than 1 .*/

void	middle_line(int x)
{
	int	medio;

	medio = 0;
	ft_putchar('B');
	while (x > 2 && medio < x - 2)
	{
		ft_putchar(' ');
		medio++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}
/*	The function 'middle_line' prints the characters that you give in each 
 *	ft_putchar. The first ft_putchar print the left character. The second 
 *	one needs the variable x and medio variable to determine how many middle 
 *	character we need. We put the conditions that x has to be higher than 2 
 *	so it can start the loop and 'medio = x - 2'(It is'x - 2' because there 
 *	is one left and one right character)to end it (We give medio 0 as its 
 *	value and add 1 right before it reach the end so it can exit the while 
 *	right before it reach the last character). The last ft_putchar only 
 *	prints if x is higher than 1 .*/

void	last_line(int x)
{
	int	medio;

	medio = 0;
	ft_putchar('C');
	while (x > 2 && medio < x - 2)
	{
		ft_putchar('B');
		medio++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}
/*	The function 'last_line' prints the characters that you give in each 
 *	ft_putchar. The first ft_putchar print the left character. The second 
 *	one needs the variable x and medio variable to determine how many middle 
 *	character we need. We put the conditions that x has to be higher than 2 
 *	so it can start the loop and 'medio = x - 2'(It is'x - 2' because there 
 *	is one left and one right character)to end it (We give medio 0 as its 
 *	value and add 1 right before it reach the end so it can exit the while 
 *	right before it reach the last character). The last ft_putchar only 
 *	prints if x is higher than 1 .*/

void	rush(int x, int y)
{
	int	altura;

	altura = 0;
	if (x > 0 && y > 0)
	{
		first_line(x);
		if (y > 1)
		{
			ft_putchar('\n');
		}
		while (y > 2 && altura < y - 2)
		{
			middle_line(x);
			ft_putchar('\n');
			altura++;
		}
		if (y > 1)
		{
			last_line(x);
		}
	}
}
/*	The function rush will use the other 3 functions from above if x and y
 *	are higher than 0, otherwise it will do nothing. The first_line function
 *	will always be used and after that if y is higher than 1 it will go to a
 *	new line. Middle_line will use altura to determine how many middle lines
 *	are needed just like the other functions use medio. Last line will be
 *	used only if y is higher than 1 . */
