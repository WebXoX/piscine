/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:33:00 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 11:13:20 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;
	int	count;
	int	size;
	int	c;

	i = 0;
	x = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	while (dest[x] != '\0')
		x++;
	count = x;
	size = i + x;
	while (count < size)
	{
		dest[count] = src[c];
		count++;
		c++;
	}
	if (count == i + x)
		dest[count] = '\0';
	return (dest);
}
/*
int main(void)
{
    char a[]="abc";
    char b[]="123";
    char *ab="abc123";
    char *bc;
    int i;
    int size;
    

    size=5;
    i=0;
    
    bc= &(*ft_strcat(a,b));
   // printf("%s \n",strcat(a,b));
    // while(bc[i]!='\0')
    // {
    printf("%s",bc);    
    // i++;
    // }
    
}*/
