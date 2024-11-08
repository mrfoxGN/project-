/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:48:42 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/26 14:23:07 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = ((unsigned char *)b);
	while (i < len)
	{
		ptr[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
/*int main()
{
	int b = 7;
	ft_memset(&b,1,4);
	//printf("%d",b);
	ft_memset(&b,3,3);
	//printf("%d",b);
	//printf("%d",b);
	ft_memset(&b,7,1);
	printf("%d",b);
	
}*/
