/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:49:36 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 14:08:30 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z' )
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char chars[]= "ad he+l 4321loasd //as";
    char *a;

   
    a=&(*ft_strcapitalize(chars));
    printf("%s",a);
}*/
