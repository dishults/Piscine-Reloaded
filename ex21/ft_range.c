/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:27:32 by dshults           #+#    #+#             */
/*   Updated: 2017/11/07 20:27:35 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(array = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	else
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		array[i] = '\0';
		return (array);
	}
}
