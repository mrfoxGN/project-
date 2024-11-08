/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:06:17 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/22 15:15:44 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s = s * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r < 0)
			return (-s * (s == 1));
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * s);
}
/*int main()
{
	char b[]="01203214500265599898316849";
	printf("%d\n",ft_atoi(b));
	printf("%d",atoi(b));
}*/
