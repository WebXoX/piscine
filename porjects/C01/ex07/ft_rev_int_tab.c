/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:35:51 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 13:43:55 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size) / 2)
	{
		temp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main(void)
{
    int tab[] = {1,2,3,4,5,12,1};
    int size;
    int i;
    
    i=0;
    size=7;
   
    ft_rev_int_tab(tab, size);
    while(i<size)
    {
    printf("%d ",tab[i]);
    i++;
    }
}
*/