/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:44:04 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:11:22 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

char	*my_strstr(char *str, char const *to_find)
{
	int	i;

	if (str[0] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			if (to_find[i] != str[i])
				return (my_strstr(str + 1, to_find));
			i++;
		}
		return (str);
	}
	else
		return (0);
}
