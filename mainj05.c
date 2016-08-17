/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_j05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:51:17 by vi-hong           #+#    #+#             */
/*   Updated: 2016/08/17 20:16:24 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char*	str);
void	ft_putnbr(int	nb);
char*	ft_strcpy(char*	dest, char* src);
char*	ft_strncpy(char*	dest, char* src, unsigned int n);
char*	ft_strstr(char* str, char* to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char 	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);

/*
int		main()
{
	char*	mot1 = "pokemon";
	char	mot2[10];

//	ft_putstr(mot);

	ft_putnbr(9);
	printf("\n");
	ft_putnbr(12);
	printf("\n");
	ft_putnbr(-123);
	printf("\n");
	ft_putnbr(0);
	printf("\n");


	printf("mot1: %s\n", mot1 );
	printf("mot2: %s\n", ft_strcpy(mot2, mot1));


//	printf("me1: %d\n",  );
//	printf("Re1: %d\n",  );

	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "chat";
	char	mot2[] = "pokemon";

	printf("%s\n", ft_strncpy(mot2, mot1, 4));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "chaton";
	char	mot2[] = "at";
	char	mot3[] = "";
	char	mot4[] = "rat";

	printf("me1: %s\n", ft_strstr(mot1, mot2));
	printf("RE1: %s\n", strstr(mot1, mot2));
	printf("me2: %s\n", ft_strstr(mot1, mot3));
	printf("Re2: %s\n", strstr(mot1, mot3));
	printf("me3: %s\n", ft_strstr(mot1, mot4));
	printf("Re3: %s\n", strstr(mot1, mot4));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "pokemon";
	char	mot2[] = "chien";
	char	mot3[] = "";
	char	mot4[] = "popa";

	printf("me1: %d\n", ft_strcmp(mot1, mot2));
	printf("RE1: %d\n", strcmp(mot1, mot2));
	printf("me2: %d\n", ft_strcmp(mot1, mot3));
	printf("Re2: %d\n", strcmp(mot1, mot3));
	printf("me3: %d\n", ft_strcmp(mot1, mot4));
	printf("Re3: %d\n", strcmp(mot1, mot4));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "chien";
	char	mot3[] = "kjwk";
	char	mot4[] = "popa";

	printf("me1: %d\n", ft_strncmp(mot1, mot2, 2));
	printf("RE1: %d\n", strncmp(mot1, mot2, 2));
	printf("me2: %d\n", ft_strncmp(mot1, mot3, 3));
	printf("Re2: %d\n", strncmp(mot1, mot3, 3));
	printf("me3: %d\n", ft_strncmp(mot1, mot4, 6));
	printf("Re3: %d\n", strncmp(mot1, mot4, 6));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "kjwk";
	char	mot4[] = "pop  a";

	printf("me1: %s\n", ft_strupcase(mot1));
	printf("me2: %s\n", ft_strupcase(mot2));
	printf("me3: %s\n", ft_strupcase(mot3));
	printf("me3: %s\n", ft_strupcase(mot4));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "kWEk";
	char	mot4[] = "p)))0oO  pa";

	printf("me1: %s\n", ft_strlowcase(mot1));
	printf("me2: %s\n", ft_strlowcase(mot2));
	printf("me3: %s\n", ft_strlowcase(mot3));
	printf("me3: %s\n", ft_strlowcase(mot4));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "kWEk";
	char	mot4[] = "p)))0oO  pa";

	printf("me1: %s\n", ft_strcapitalize(mot1));
	printf("me2: %s\n", ft_strcapitalize(mot2));
	printf("me3: %s\n", ft_strcapitalize(mot3));
	printf("me3: %s\n", ft_strcapitalize(mot4));
	return(0);
}
*/


int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "kWEk";
	char	mot4[] = "p)))0oO  pa";

	printf("me1: %d\n", ft_str_is_alpha(mot1));
	printf("me2: %d\n", ft_str_is_alpha(mot2));
	printf("me3: %d\n", ft_str_is_alpha(mot3));
	printf("me3: %d\n", ft_str_is_alpha(mot4));
	return(0);
}


/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "468413546851331";
	char	mot4[] = "p)))0oO  pa";

	printf("me1: %d\n", ft_str_is_numeric(mot1));
	printf("me2: %d\n", ft_str_is_numeric(mot2));
	printf("me3: %d\n", ft_str_is_numeric(mot3));
	printf("me3: %d\n", ft_str_is_numeric(mot4));
	return(0);
}
*/


/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "468413546851331";
	char	mot4[] = "ppa";
	char	mot5[] = "p  pa";

	printf("me1: %d\n", ft_str_is_lowercase(mot1));
	printf("me2: %d\n", ft_str_is_lowercase(mot2));
	printf("me3: %d\n", ft_str_is_lowercase(mot3));
	printf("me3: %d\n", ft_str_is_lowercase(mot4));
	printf("me3: %d\n", ft_str_is_lowercase(mot5));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "cHen";
	char	mot3[] = "468413546851331";
	char	mot4[] = "PPA";
	char	mot5[] = "P  PA";

	printf("me1: %d\n", ft_str_is_uppercase(mot1));
	printf("me2: %d\n", ft_str_is_uppercase(mot2));
	printf("me3: %d\n", ft_str_is_uppercase(mot3));
	printf("me3: %d\n", ft_str_is_uppercase(mot4));
	printf("me3: %d\n", ft_str_is_uppercase(mot5));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "tu Parles DE vI";
	char	mot3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	mot4[] = "pPA";
	char	mot5[] = "p  48pA vin[gt-DEeux";
	char	mot6[] = "lA Gr]an\\de pU]ISS{ANCE dES te[ENEB]RE EN 42MOTS oU 42mots";

	printf("me1: %s\n", ft_strcapitalize(mot1));
	printf("me2: %s\n", ft_strcapitalize(mot2));
	printf("me3: %s\n", ft_strcapitalize(mot3));
	printf("me3: %s\n", ft_strcapitalize(mot4));
	printf("me3: %s\n", ft_strcapitalize(mot5));
	printf("me3: %s\n", ft_strcapitalize(mot6));
	return(0);
}
*/

/*
int		main()
{
	char	mot1[100] = "";
	char	mot2[100] = "Pokemon ";
	char	mot3[100] = "des tenebres ";
	char	mot4[100] = "Tom et ";
	char	mot5[100] = "Jerry ";

	printf("me1: %s\n", ft_strcat(mot2, mot3));
	printf("me2: %s\n", ft_strcat(mot5, mot3));
	printf("me3: %s\n", ft_strcat(mot4, mot5));
	printf("me4: %s\n", ft_strcat(mot4, mot5));
	printf("me5: %s\n", ft_strcat(mot1, mot2));
	return(0);
}
*/


/*
int		main()
{
	char	mot1[100] = "";
	char	mot2[100] = "Pokemon ";
	char	mot3[100] = "des tenebres ";
	char	mot4[100] = "Tom et ";
	char	mot5[100] = "Jerry ";

	printf("me1: %s\n", ft_strncat(mot2, mot3, 3));
	printf("me2: %s\n", ft_strncat(mot5, mot3, 3));
	printf("me3: %s\n", ft_strncat(mot4, mot5, 3));
	printf("me4: %s\n", ft_strncat(mot4, mot5, 3));
	printf("me5: %s\n", ft_strncat(mot1, mot2, 2));
	return(0);
}
*/

/*
int		main()
{
	char*	mot1 = "";
	char	mot2[] = "";

	printf("%s\n", );
	return(0);
}
*/
