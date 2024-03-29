/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:43:34 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/07 17:46:39 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
    char a[]="helloo";
    char b[]="helloods";
    int bc;

    int n =6 ;

    bc= ft_strncmp(a,b,n);
  
    printf("%d\n%d",strncmp(a,b,n),bc);   
    
      
}
*/
