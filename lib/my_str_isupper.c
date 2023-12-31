/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_str_isupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:38:37 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:29:53 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_str_isupper(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
