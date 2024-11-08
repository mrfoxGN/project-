/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:32:43 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/28 11:09:14 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*ptr;

	c1 = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c1)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
/*int main()
{
	int i = 0;
	int a;
	int  str[4]={1,5,6,8};
	int *b =ft_memchr(str,5,16);
	while(i < 3 )
	{
		printf("%d",b[i]);
		printf("\n");
		i++;
	}
	
}*/
