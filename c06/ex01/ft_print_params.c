/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:31:47 by garslan           #+#    #+#             */
/*   Updated: 2025/03/09 07:14:31 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (argc > 0)
	{
		while (argv[a])
		{
			while (argv[a][i])
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			write(1, "\n", 1);
			a++;
			i = 0;
		}
	}
}
