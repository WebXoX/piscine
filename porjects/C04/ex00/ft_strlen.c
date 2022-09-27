/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:12:32 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 15:50:32 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
    char strs[]= {"salut, comment tu vas ?"};
  
   
    int l =strlen(strs);
    int length = (ft_strlen(strs));
    printf("%d %d ",length ,l);
}*/
