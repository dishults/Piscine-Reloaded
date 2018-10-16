/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:11:07 by dshults           #+#    #+#             */
/*   Updated: 2017/11/07 20:11:09 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	n;

	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
		n++;
	}
	return (0);
}
