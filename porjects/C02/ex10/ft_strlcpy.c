/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:50:22 by jperinch          #+#    #+#             */
/*   Updated: 2022/06/02 15:27:38 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	int				index;

	index = 0;
	count = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	while (count < size - 1 && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
		dest[count] = '\0';
	return (index);
}
