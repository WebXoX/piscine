/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:17:44 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/22 17:01:25 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	c = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((r == 1 && c == 1) || ((r == y && c == 1) && x > 1 && y > 1))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (r == y && c == x))
				ft_putchar('C');
			else if ((r == 1 && c > 1 && c < x) || (r > 1 && r < y && c == 1)
				|| (r > 1 && r < y && c == x) || (r == y && c > 1 && c < x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
			if (c == x + 1)
				ft_putchar('\n');
		}
		c = 1;
		r++;
	}
}
