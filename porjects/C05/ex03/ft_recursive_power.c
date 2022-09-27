/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:14:20 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 19:28:09 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb *(ft_recursive_power(nb, power - 1)));
}
/*
int main()
{
    int numb;
    int ans;
    
    numb=109;
    ans=ft_recursive_power(numb,3);
    printf("%d",ans);
}*/
