/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:52:18 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 14:34:35 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     main(int argc, char **argv)                                
{       
        char *str;
        char *str_org;                                             
        if(argc != 3)                                              
        {       
                printf("Error <few/to many> parameters");          
                return (0);                                        
        }
        str = argv[1];
        str_org = argv[1];
        printf("before_str_user: %s\n",str);
        printf("before_str_original: %s\n",str_org);               
        ft_bzero(str, atoi(argv[2]));
        bzero(str_org, atoi(argv[2]));
        printf("------------------\n \after_str_user: %s\n",str + atoi(argv[2]));
        printf("after_str_original: %s\n",str_org+ atoi(argv[2])); 
        return (0);                                                
} 
