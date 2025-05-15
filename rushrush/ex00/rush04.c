/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedogan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:17:43 by nedogan           #+#    #+#             */
/*   Updated: 2025/03/05 08:08:11 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0)
				|| (i == x - 1 && j == y - 1 && y > 1 && x > 1))
				ft_putchar('A');
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('C');
			else if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
