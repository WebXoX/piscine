/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:31:17 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 13:46:28 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}
*/
void	ft_print_numbers(void)
{
	int		i;
	char	ch;

	i = 48;
	while (i <= 57)
	{
		ch = i;
		write(1, &ch, 1);
		i++;
	}
}
