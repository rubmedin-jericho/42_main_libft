/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:04:07 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 14:35:47 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     main(int argc, char **argv)                                
{                                                                  
        char s[255];                                               
        char s_org[255];                                           
        char *str;                                                 
        char *str_org;

        if(argc != 3)
        {
                printf("Error <few/to many> parameters");
                return (1);
        }
        str = argv[1];
        str_org = argv[1];
        ft_memcpy(s, str, atoi(argv[2]));
        memcpy(s_org, str_org, atoi(argv[2]));
        printf("str_user: %s\n", s);
        printf("str_original: %s\n", s_org);
        return (0);
}
