#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define ERROR 1
#define SUCCES 0

int	select_funct(char **s1, char *s2)
{
	int	i;

	i = 0;
	while(i < 24)
	{
		if(strcmp(s1[i], s2) == 0)
			return (i + 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char *basic_functions[24] = {"ft_memset",\
	"ft_bzero",\
	"ft_memcpy",\
	"ft_memccpy",\
	"ft_memmove",\
	"ft_memchr",\
	"ft_memcmp",\
	"ft_strlen",\
	"ft_isalpha",\
	"ft_isdigit",\
	"ft_isalnum",\
	"ft_isascii",\
	"ft_isprint",\
	"ft_toupper",\
	"ft_tolower",\
	"ft_strchr",\
	"ft_strrchr",\
	"ft_strncmp",\
	"ft_strlcpy",\
	"ft_strlcat",\
	"ft_strnstr",\
	"ft_atoi",\
	"ft_calloc",\
	"ft_strdup"};

	char	mk_target[50] = "make TARGET=";	
	char	cd[50] = "cd makes && ";
	char	tmp[50];
	char	mk_clean[50] = "make clean TARGET=";
	int	i = 0;
	int	err_makefile = 0;

	if(argc == 1)
	{
		while(i < 24)
		{
			memset(tmp, 0, sizeof(tmp));
			strcpy(tmp, cd);
			strcat(tmp, mk_target);
			strcat(tmp, basic_functions[i]);
			err_makefile = system(tmp);
			i++;
		}
	}
	else if(argc == 2 && (strcmp(argv[1], "clean") == SUCCES))
	{
		while(i < 24)		
		{
			memset(tmp, 0, sizeof(tmp));
			strcpy(tmp, cd);
			strcat(tmp, mk_clean);
			strcat(tmp, basic_functions[i]);
			err_makefile = system(tmp);
			memset(tmp, 0, 50);
			i++;
		}
	}
	else if(argc == 2 && (select_funct(basic_functions, argv[1]) != SUCCES))
	{
		strcat(mk_target, basic_functions[(select_funct(basic_functions, argv[1])) - 1]);
		err_makefile = system(mk_target);
	}
	else if(argc == 3 && (strcmp(argv[1], "clean") == SUCCES) && (select_funct(basic_functions, argv[2]) != SUCCES))
	{
		strcat(mk_clean, basic_functions[(select_funct(basic_functions, argv[2])) - 1]);
		err_makefile = system(mk_clean);
	}
	printf("finish\n");
	return (SUCCES);
}
