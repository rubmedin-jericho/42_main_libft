/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:20:52 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 19:21:09 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int     main(int argc, char **argv)
{
        int     output_user;
        int     output_original;

        if(argc != 2)
        {
                printf("Error <few/to many> parameters");
                return (1);
        }
        output_user = ft_strlen(argv[1]);
        output_original = strlen(argv[1]);
        printf("output_user: %i\noutput_original: %i\n", output_user, output_original);
        return (0);
}
