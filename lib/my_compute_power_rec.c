/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_compute_power_rec.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:30:47 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:51:40 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	my_compute_power_rec(int nb, int p)
{
	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	return (nb * my_compute_power_rec(nb, p - 1));
}
