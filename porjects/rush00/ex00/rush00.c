/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:58:05 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/22 16:49:30 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && (c == 1 || c == x))
				|| (r == y && (c == 1 || c == x)))
				ft_putchar('o');
			else if ((r == 1 && c > 1 && c < x) || (r == y && c > 1 && c < x))
				ft_putchar('-');
			else if ((r > 1 && r < y && c == 1) || (r > 1 && r < y && c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
			if (c == x + 1)
				ft_putchar('\n');
		}
		r++;
	}
}
