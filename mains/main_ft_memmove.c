#include "../../libft.h"

int	main(int argc, char **argv)
{
	char	buff_user[50];
	char	buff_original[50];

	if(argc != 3)
	{
		printf("Error <few/to many> parameters");
		return (1); 	
	}
	ft_memmove(buff_user, argv[1], atoi(argv[2]));
	memmove(buff_original, argv[1], atoi(argv[2]));
	printf("buff_user: %s\n", buff_user);
	printf("buff_original: %s\n", buff_original);
	return (0);
}
