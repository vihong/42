/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:51:17 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/10 15:41:48 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


void	ft_putchar(char c);

int		ft_atoi(char* str);

int		main()
{
	char*	n1 = "973";
	char*	n2 = " 2147483647";
	char*	n3 = "973		   ";
	char*	n4 = "    jekfbw973";
	char*	n5 = "+973";
	char*	n6 = "-973jrnv245";
	char*	n7 = "  -+-+973";
	char*	n8 = "  +-+-973re545446454";

	printf("me1: %d\n", ft_atoi(n1));
	printf("RE1: %d\n", atoi(n1));
	printf("me2: %d\n", ft_atoi(n2));
	printf("RE2: %d\n\n", atoi(n2));
	printf("me3: %d\n", ft_atoi(n3));
	printf("RE3: %d\n", atoi(n3));
	printf("me4: %d\n", ft_atoi(n4));
	printf("RE4: %d\n\n", atoi(n4));
	printf("me5: %d\n", ft_atoi(n5));
	printf("RE5: %d\n", atoi(n5));
	printf("me6: %d\n", ft_atoi(n6));
	printf("RE6: %d\n\n", atoi(n6));
	printf("me7: %d\n", ft_atoi(n7));
	printf("RE7: %d\n", atoi(n7));
	printf("me8: %d\n", ft_atoi(n8));
	printf("RE8: %d\n", atoi(n8));

	return(0);
}



