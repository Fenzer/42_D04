/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:19:06 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/09 16:09:49 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_intmin(void)
{
	ft_putchar('-');
	ft_putchar(2 + '0');
	ft_putchar(1 + '0');
	ft_putchar(4 + '0');
	ft_putchar(7 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
	ft_putchar(3 + '0');
	ft_putchar(6 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
}

void	ft_putnbr(int nb)
{
	int i;

	i = 1000000000;
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	if (nb == -2147483648)
		ft_print_intmin();
	while (i >= 10 && nb != -2147483648)
	{
		if ((nb / i) != 0)
		{
			ft_putchar((nb / i) + '0');
			return (ft_putnbr(nb - ((nb / i) * i)));
		}
		i /= 10;
	}
}
int		ft_iterative_factorial(int nb)
{
	int		r;
	int		tp;
	
	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb >= 0)
	{
		if (nb == 0)
			tp = 1;
		else
			tp = nb;
		r *= tp;
		nb--;
	}
	return (r);
}

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
}
