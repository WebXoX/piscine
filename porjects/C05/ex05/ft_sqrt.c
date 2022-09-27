/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:56:07 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/07 14:20:09 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i < nb && i < 46341))
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main()
{
    int numb;
    int ans;
    
    ans=ft_sqrt(2147302921);
    printf("%d",ans);
}
*/
