/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_find_prime_sup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:48:00 by anyoksom          #+#    #+#             */
/*   Updated: 2023/12/13 02:49:13 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_find_prime_sup(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (nb);
	else
	{
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (my_find_prime_sup(nb + 1));
			i++;
		}
	}
	return (nb);
}
