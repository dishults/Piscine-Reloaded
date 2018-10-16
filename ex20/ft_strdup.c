/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:23:12 by dshults           #+#    #+#             */
/*   Updated: 2017/11/07 20:23:15 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (!(copy = (char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	else
	{
		while (i < length)
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
