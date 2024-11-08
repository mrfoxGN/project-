/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:55:35 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/27 17:26:59 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = (const unsigned char *)ptr1;
	b = (const unsigned char *)ptr2;
	i = 0;
	if (num == 0)
	{
		return (0);
	}
	while (a[i] == b[i] && i < num - 1)
	{
		i++;
	}
	return (a[i] - b[i]);
}
/*int main()
{
	char b[] = "anas1";
	char c[]= "anass";
	printf("%d",ft_memcmp(b,c,4));
}*/
