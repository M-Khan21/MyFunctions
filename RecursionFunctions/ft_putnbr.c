/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:59:10 by makhan            #+#    #+#             */
/*   Updated: 2023/05/26 15:45:21 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It is a function that prints numbers without using printf; it implements recursion

#include <unistd.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return 0;
}

int ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);

	else if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-n);
	}

	else if(n >= 10)
	{
		ft_putnbr(n/10);
		ft_putchar('0' + (n % 10));
	}
	else
		ft_putchar('0' + n);

	return 0;
}


int main()
{

	int n = 9756;
	int m = -42;
	int o = -2147483648;

	ft_putnbr(n);
	write(1, "\n", 2);

	ft_putnbr(m);
	write(1, "\n", 2);

	ft_putnbr(o);
	write(1, "\n", 2);

	return 0;

}
