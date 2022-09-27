/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:15:26 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 15:59:44 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	answer;

	answer = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		answer *= nb;
		nb--;
	}
	return (answer);
}
/*
int main()
{
    int numb;
    int ans;
    
    numb=109;
    ans=ft_iterative_factorial(numb);
    printf("%d",ans);
}*/
