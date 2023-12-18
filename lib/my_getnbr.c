/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:32:32 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:47:38 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_getnbr(char const *str)
{
	int		i;
	int		neg;
	long	n;

	i = 0;
	neg = 1;
	n = 0;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	if (((n * neg) > 2147483647) || ((n * neg) < -2147483648))
		return (0);
	else
		return (n * neg);
}
