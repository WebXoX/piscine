/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:31:17 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 13:51:26 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void	ft_is_negative(int i);

int	main(void)
{
	ft_is_negative(1);
}*/

void	ft_is_negative(int i)
{	
	if (i >= 0)
	{
		write(1, "P", 1);
	}
	else
		write(1, "N", 1);
}
