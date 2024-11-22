/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:53:58 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 19:54:08 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     ft_iter_str(char *str)
{
        size_t  i;

        i = 0;
        while(str[i])
        {
                if(ft_isalpha(str[i]) == 0)
                        return (0);
                i++;
        }
        return (1);
}

int     iter_str(char *str)
{
        size_t  i;

        i = 0;
        while(str[i])
        {
                if(isalpha(str[i]) == 0)
                        return (0);
                i++;
        }
        return (1);
}

int     main(int argc, char **argv)
{
        int     output_user;
        int     output_original;

        if(argc != 2)
        {
                printf("Error <few/to many> parameters");
                return (1);
        }
        output_user = ft_iter_str(argv[1]);
        output_original = iter_str(argv[1]);
        printf("output_user: %i\noutput_original: %i\n", output_user, output_original);
        return (0);
}
