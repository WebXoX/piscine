/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:55:22 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 13:45:03 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;
	int	x;

	y = *a / *b;
	x = *a % *b;
	*a = y;
	*b = x;
}

/*
int main(void)
{
    int num1;
    int num2;

    num1=100;
    num2=5;

    ft_ultimate_div_mod(&num1,&num2);
    printf("%d \n%d",num1,num2);
}*/
