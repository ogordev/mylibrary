/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_compute_square_root.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:52:55 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:50:46 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_compute_square_root(int nb)
{
	int	result;
	int	a;

	result = 0;
	a = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result <= nb)
	{
		result++;
		a = result * result;
		if (a == nb)
			return (result);
	}
	return (0);
}
