/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:46:47 by makhan            #+#    #+#             */
/*   Updated: 2023/05/24 23:13:44 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	find_max(int num_of_args, ...)
{
	va_list x;
	va_start(x, num_of_args);

	int max;

	max = va_arg(x, int);
	for(int i = 1; i < num_of_args; i++)
	{
		int value = va_arg(x, int);
		if (value > max)
			max = value;
	}
	va_end(x);
	return max;
}

int main ()
{
	int test1 = find_max(3, 13, 4, 46);
	int test2 = find_max(5, 3, 5, 7, 100, 0);

	printf("The max is: %d\n", test1);
	printf("The max is: %d\n", test2);
	return 0;
}
