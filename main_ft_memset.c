#include "../libft.h"

int     main(int argc, char **argv)
{
        char *str;

        if(argc != 4)
                return (0);
        str = argv[1];
        printf("str_before: %s\n", str);
        memset(str, atoi(argv[2]), atoi(argv[3]));
        printf("str_after: %s\n", str);
        return (0);
}

