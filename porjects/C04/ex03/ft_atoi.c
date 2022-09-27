/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:26:04 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 15:57:11 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	m;

	i = 0;
	m = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' '))
		{
			if (str[i] >= '0' && str[i] <= '9')
				result = result * 10 + (int)str[i] - '0';
			if (str[i] == '-')
				m++;
			if (!(str[i] >= '0' && str[i] <= '9')
				&& (str[i] != '-') && (str[i] != '+'))
				break ;
		}
		i++;
	}
	if (m % 2 != 0)
		result *= -1;
	return (result);
}
/*
int	main(void)
{   
    char numbers[]=" ---+--+1234567";
    int numb;

    numb =ft_atoi(numbers);
    printf("%d",numb);
}
*/
