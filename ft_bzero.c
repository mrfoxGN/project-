/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:32:55 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/27 17:56:47 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
/*int main()
{
	int i = 0;
	int	str[5]={1,5,2,8,9};
	ft_bzero(str,sizeof(str));
	while(i < 5)
	{
		printf("%d",str[i]);
		printf("\n");
		i++;
	}
}
int main()
{
	char str[]="anassguendaoui";
	ft_bzero(str,sizeof(str));
	printf("%s",str);
}*/
