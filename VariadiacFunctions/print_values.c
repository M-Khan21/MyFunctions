/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:34:14 by makhan            #+#    #+#             */
/*   Updated: 2023/05/25 01:17:45 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include necessary headers
#include <stdarg.h>
#include <stdio.h>

//declare your function
int	print_values(int first, ...)
{
	//do your syntactic sugar
	va_list args;
	va_start(args, first);

	//declare i = 0;
	int i = 0;


	//do sth with your function (in this case da a loop)


	//print the first argument
	printf("%i\n", first);

	int value = va_arg(args, int);
	while (value != -1) //use sentinal value when no. of args is unknown i.e. be creative anf beat the system
	{
		printf("%i\n", value);
		value = va_arg(args, int);
		/*you need call va_arg() in your loop,so that when everytime
		value gets called va_arg() also gets called and it moves to the next value*/
	}

	//return sth
	return 0;
}

//write a main and call the function
int main()
{
	print_values(5,35,66,6,5,7,-1);
	return 0;
}
