/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:06:27 by arupp             #+#    #+#             */
/*   Updated: 2019/08/01 20:40:40 by arupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		a++;
		while (b <= 9)
		{
			b++;
			while (c <= 9)
			{
				c++;
				
			}
		}
	}
	ft_putchar(a + '0');
	ft_putchar('\n');
	return (0);
}
