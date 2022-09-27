/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:08:30 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 13:45:06 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    
    int dAnswer;
    int mAnswer;

    ft_div_mod(10,2,&dAnswer,&mAnswer);
    printf("%d \n",dAnswer);
    printf("%d\n",mAnswer);

}*/
