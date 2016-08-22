/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainJ07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:55:58 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/22 18:20:26 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>


char*	ft_strdup(char* src);
int		*ft_range(int min, int max);
int 	ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

/*
int		main()
{
	char*	mot1 = "pokemon";

	printf("src: %s\n", mot1); 	
	printf("dup: %s\n", ft_strdup(mot1));	
	return (0);
}
*/

/*
int		main()
{
	int**		range;
	int			i = 0;

	printf("%d\n", ft_ultimate_range(range, 3, 8));
	for (i = 0; i < 5; i++)
		printf("%d ", *((*range) + i));	
	return (0);
}
*/

/*
int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
*/


int		main(int argc, char** argv)
{
	char**	tab;

	argc = 2;
	tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);	
	return (0);
}


