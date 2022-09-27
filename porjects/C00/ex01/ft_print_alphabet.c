/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:41:41 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 13:50:39 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

/*void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}
*/

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 97;
	while (i <= 122)
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
