/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:41:41 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 13:50:56 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

/*void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}
*/

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	ch;

	i = 122;
	while (i >= 97)
	{
		ch = i;
		write(1, &ch, 1);
		i--;
	}
}
