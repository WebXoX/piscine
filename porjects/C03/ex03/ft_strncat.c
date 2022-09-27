/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:57:23 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 18:44:26 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (x < nb && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char a[10]="abc";
	char ab[10]="abc";
    char b[]="123";
    char *bc;
    int size;
    

    size=3;
    
    bc= &(*ft_strncat(a,b,size));
   	printf("%s \n",strncat(ab,b,size));

    printf("%s:",bc);    
}
*/
