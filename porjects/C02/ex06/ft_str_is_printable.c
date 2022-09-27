/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:55:28 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/01 17:04:29 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{	
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
    char *chars;
    int a;

    chars="{}}<?<>?<>!#$@^$&*())_()&*&^$$#$~@";
    a=ft_str_is_printable(chars);
    printf("%d",a);
}*/
