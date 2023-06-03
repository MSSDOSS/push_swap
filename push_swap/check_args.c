/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:22:43 by hel-haia          #+#    #+#             */
/*   Updated: 2023/06/02 17:54:45 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_dup(char **av)
{
	int i = 1;
	int j;
	while(av[i])
	{
		j =  i +1;
		while(av[j])
		{
			if(ft_atoi(av[j]) == ft_atoi(av[i]))
			{
				printf("===============================");
				printf("\n===>ERROR: Duplicated args!<===\n");
				printf("===============================\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
	return ;
}