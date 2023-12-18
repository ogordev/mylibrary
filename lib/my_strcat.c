/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:39:22 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 02:19:40 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	int	len;
	int	i;

	i = 0;
	len = my_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
