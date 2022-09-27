/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:46:32 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 19:03:54 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	answer = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		answer *= nb;
		i++;
	}
	return (answer);
}
/*
int main()
{
    int numb;
    int ans;
    
    numb=-109;
    ans=ft_iterative_power(numb,-3);
    printf("%d",ans);
}*/
