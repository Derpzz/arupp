/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:14:35 by arupp             #+#    #+#             */
/*   Updated: 2019/08/01 20:58:32 by arupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	 ft_print_alphabet(void)
{

}

int		main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');

	ft_print_alphabet();

	return (0);
}
