/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:34:35 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/01 20:44:08 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb[2];

	nb[1] = n;
	nb[0] = count_size(nb[1]);
	if (nb[1] == 0)
		str = ft_calloc(2, sizeof(char));
	else
		str = ft_calloc((nb[0] * sizeof(char)) + 1, sizeof(char));
	if (!str)
		return (0);
	nb[0]--;
	if (nb[1] == 0)
		str[0] = 48;
	else if (nb[1] < 0)
	{
		str[0] = '-';
		nb[1] = nb[1] * -1;
	}
	while (nb[1] > 0)
	{
		str[nb[0]--] = nb[1] % 10 + '0';
		nb[1] = nb[1] / 10;
	}
	return (str);
}
/*int	main(void)
{
	int		b;
	char	*ptr;

	b = 0;
	ptr = ft_itoa(b);
	printf("%s", ptr);
}*/
