/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:59:01 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/08 12:59:04 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
    int c;
    int *numb;
    c = 0;
    i = min;
    if (min >= max)
    {
        range = NULL;
        return (0);
    }
    while (i < max)
        i++;
    i--;

    numb = (int*)malloc(sizeof(int) * i);
    
    while (min <= i)
    {
        numb[c] = min;
        min++;
        c++;
    }
    if(!numb)
        return (-1);

    *range= numb;
     return (i);
}

int	main(void)
{
    int b;
    int **ab;

    int i;
    i=0;
    b =  ft_ultimate_range(ab ,1,7);
   
    printf("%d",b);
    while( i < 6)
        printf(" %d ",ab[0][i++]);

}
