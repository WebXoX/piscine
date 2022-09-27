/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:00:26 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 16:01:32 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb *(ft_recursive_factorial(nb - 1)));
}

/*int main()
{
    int numb;
    int ans;
    
    numb=-1;
    ans= ft_recursive_factorial(numb);
    printf("%d",ans);
}
*/