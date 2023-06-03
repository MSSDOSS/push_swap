/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:01:36 by hel-haia          #+#    #+#             */
/*   Updated: 2023/06/02 18:03:40 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*save;

	save = NULL;
	ch = c;
	while (1 != 0)
	{
		if (*s == ch)
			save = ((char *)s);
		if (!*s)
			return (save);
		s++;
	}
	return (NULL);
}
