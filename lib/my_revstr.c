/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:38:12 by anyoksom          #+#    #+#             */
/*   Updated: 2023/12/13 02:39:57 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

char	*my_revstr(char *str)
{
	char	c;
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (str[j] != '\0')
		j++;
	while (++i < --j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	return (str);
}
