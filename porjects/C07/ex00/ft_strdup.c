/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:47:38 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/06 20:47:40 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
    int c;
    char *str2;

	i = 0;
    c = 0;
    while (src[i] != '\0')
        i++;
    if(!(str2 = (char*)malloc(sizeof(char) * i + 1)))
        return NULL;
     while (src[c] != '\0')
        {
            str2[c] = src[c];
            c++;
        } 
        str2[c] = '\0';
        return (str2);
     
}

int	main(void)
{
    char strs[]= {"salut"};
  
   
    printf("%s",ft_strdup(strs));

}
