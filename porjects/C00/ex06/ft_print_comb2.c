/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:13:34 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 13:47:25 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(int number)
{
	char	one;
	char	tens;

	one = number / 10 + '0';
	tens = number % 10 + '0';
	write(1, &one, 1);
	write(1, &tens, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_number(a);
			write(1, " ", 1);
			print_number(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
	a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
