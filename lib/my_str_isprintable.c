/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_str_isprintable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:38:15 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:31:33 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_str_isprintable(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
