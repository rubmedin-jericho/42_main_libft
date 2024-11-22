/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:36:42 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 14:36:58 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	main(int argc, char **argv)
{
	char	buff_user[100];
	char	buff_org[100];
	
	if(argc != 4)
	{
		printf("Error <few/to many> parameters");
                return (1);		
	}
	ft_memccpy(buff_user, argv[1], atoi(argv[2]), atoi(argv[3]));
	memccpy(buff_org, argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("buff_user: %s\n", buff_user);
	printf("buff_original: %s\n", buff_org);
	return (0); 
}

