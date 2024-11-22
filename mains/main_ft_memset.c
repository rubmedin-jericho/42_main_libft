/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:29:45 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 14:37:20 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	main(int argc, char **argv)
{
	char *str_user;
	char *str_org;
	if(argc != 4)
        {
                printf("Error <few/to many> parameters");
                return (0);
        }
	str_user = argv[1];
	str_org = argv[1];
	ft_memset(str_user, atoi(argv[2]), atoi(argv[3]));
	memset(str_org, atoi(argv[2]), atoi(argv[3]));
	printf("str_user: %s\n", str_user);
	printf("str_original: %s\n", str_org);
	return (0);
}
