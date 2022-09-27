/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:22:25 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/31 20:52:17 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char a;
    char *b;
    char *bc;
    int i;
    
    i=0;
    b="joe";

    bc= &(*ft_strcpy(&a,&*b));
    while(bc[i]!='\0')
    {
    printf("%c",bc[i]);    
    i++;
    }
      
}*/
