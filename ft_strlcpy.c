/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:45:02 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/23 13:55:13 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size == 0)
	{
		return (j);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*int main()
{
	char *b=0x00;
	char c[]="anas1";
	char b2[]="ja";
	char c2[]="anas1";
	printf("%zu\n",strlcpy(b,c,2));
	printf("%s",b);
	printf("\n\n\n\n");
	printf("%zu\n",ft_strlcpy(b2,c2,2));
	printf("%s",b2);
	
}*/
