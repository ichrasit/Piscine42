/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhaoz <muhaoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:08:14 by muhaoz            #+#    #+#             */
/*   Updated: 2024/02/11 22:27:19 by muhaoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] && ac)
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
