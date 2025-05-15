/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:21:20 by garslan           #+#    #+#             */
/*   Updated: 2025/03/11 20:25:21 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = ((int *)malloc((len) * sizeof(int) + 1));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
