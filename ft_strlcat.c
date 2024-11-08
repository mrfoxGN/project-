/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:08:46 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/24 10:49:13 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	a;
	size_t	b;

	i = 0;
	j = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (size == 0 && !dst)
		return (b);
	if (size <= a)
		return (size + b);
	while (dst[i])
	{
		i++;
	}
	while (src[j] && j < size - a - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (a + b);
}
/*int	main(void)
{
	char	*b=0x00;
	char	c[]="guendaoui";

	printf("%zu", ft_strlcat(b, c, 0));
	printf("\n");
	printf("%s", b);
}*/
