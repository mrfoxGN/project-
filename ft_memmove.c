/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:49:48 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/06 12:51:59 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	src1 = (char *)src;
	dst1 = (char *)dst;
	i = 0;
	if (dst1 > src1)
		while (len-- > 0)
			dst1[len] = src1[len];
	else
	{
		while (len--)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
/*int	main(void)
{
	// char	str1[];
	// char	str2[];

	char str1[] = "123456789";
	//printf("%s",str1+5);
	printf("%s\n",ft_memmove(str1+4,str1,5));
	printf("%s",f
	//printf("%s",memcpy(str1+ 5,str1))
}*/