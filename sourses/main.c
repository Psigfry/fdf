/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:28:01 by psigfry           #+#    #+#             */
/*   Updated: 2020/02/26 20:14:35 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../include/fdf.h"

void	ft_error(int e)
{
	if (e == 0)
		write(1, "usage: ./fdf <map>\n", 20);
	if (e == 1)
		write(1, "usage: ./fdf <map>\n", 20);
	if (e == 2)
		write(1, "usage: ./fdf <map>\n", 20);
	exit(0);
}

int		main(int ac, char **av)
{
	t_map	*map;
	
	if (ac != 2)
		ft_error(1);
	if (!(map = (t_map *)malloc(sizeof(t_map))))
		err_out(2);
	return (0);
}
