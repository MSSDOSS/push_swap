/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:24:44 by hel-haia          #+#    #+#             */
/*   Updated: 2023/06/02 16:52:34 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int main(int ac, char **av)
{
	int		siir;
	char	*skkr;

	if(ac == 1)
		return (0);
	if (ac > 1)
	{
		check_dup(av);
		skkr = av[1];
		siir = atoi(skkr);
		printf("%d\n", siir);
	}
	return (0);
}