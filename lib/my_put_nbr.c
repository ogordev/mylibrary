/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:33:33 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:44:48 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_put_nbr_function(int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i = nb % 10;
		nb = (nb - i) / 10;
		my_put_nbr_function(nb);
		my_putchar(i + 48);
	}
	else if (nb < 10)
		my_putchar(nb + 48);
	return (0);
}

int	my_put_nbr(int nb)
{
	if (nb < 0)
	{
		my_putchar('-');
		nb = nb * -1;
		my_put_nbr_function(nb);
	}
	else
		my_put_nbr_function(nb);
	return (0);
}
