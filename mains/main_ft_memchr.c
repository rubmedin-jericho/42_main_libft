/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:27:11 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 17:27:35 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     main(int argc, char **argv)
{
        char    *output_user;
        char    *output_original;

        if(argc != 4)
        {
                printf("Error <few/to many> parameters");
                return (1);
        }
        output_user = ft_memchr(argv[1], atoi(argv[2]), atoi(argv[3]));
        output_original = memchr(argv[1], atoi(argv[2]), atoi(argv[3]));
        printf("output_user: %s\noutput_original: %s\n", output_user, output_original);
        return (0);
}
