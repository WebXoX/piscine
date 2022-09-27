/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:24:35 by jperinch          #+#    #+#             */
/*   Updated: 2022/09/27 10:24:54 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	x;

	i = 0;
	x = i + 1;
	while (i < size)
	{
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				temp = tab[i];
				tab[i] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		x = i + 1;
		i++;
	}
}
int main(void)
{
    int tab[] = {13,9,2,3,4,5,1,1,5};
    int size;
    int i;
    
    i = 0;
    size = 9;
   
    ft_sort_int_tab(tab, size);
     while(i<size)
    {
    printf("%d ",tab[i]);
    i++;
    }
}
