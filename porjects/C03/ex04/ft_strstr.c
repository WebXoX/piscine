/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:35:18 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 11:26:20 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			j = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int main(void)
{
    char stri[]="food there it there";
    char b[]="there";
    char *bc;
  
    bc= ft_strstr(stri,b);
    printf("%s",bc);    
    
}*/
