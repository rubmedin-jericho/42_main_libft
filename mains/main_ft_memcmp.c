/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:37:19 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 18:46:29 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     main(int argc, char **argv)
{
        int     output_user;
        int     output_original;

        if(argc != 4)
        {
                printf("Error <few/to many> parameters");
                return (1);
        }
        output_user = ft_memcmp(argv[1], argv[2], atoi(argv[3]));
        output_original = memcmp(argv[1], argv[2], atoi(argv[3]));
        printf("output_user: %i\noutput_original: %i\n", output_user, output_original);
        return (0);
}
