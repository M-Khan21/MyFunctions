/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 00:15:43 by makhan            #+#    #+#             */
/*   Updated: 2023/06/02 00:40:40 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
	int i = 0;
	i = write(1, "0x", 2) + 0;
	write(1, "\n", 2);
	printf("%i",i);
	return 0;
}


// for get_next_line
// https://github.com/tblaase/ft_get_next_line/blob/master/get_next_line.c
