/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:19:40 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 14:03:36 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
		i++;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
int main(void)
{
    char a[99]="abcdefg";
    char b[]="123456789";
    char *bc;
    int i;
    int size;
    

    size=12;
    i=0;
    
    bc= &(*ft_strncpy(a,b,size));
    // while(bc[i]!='\0')
    // {
    printf("%s",bc);    
    
    // }
      
}
*/
