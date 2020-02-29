/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 13:36:27 by psigfry           #+#    #+#             */
/*   Updated: 2020/02/29 13:36:30 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	err_out(int e)
{
	if (e == 0)
		write(1, "Error! Don't have memory\n", 25);
	if (e == 1)
		write(1, "usage: ./fdf <filename>\n", 24);
	if (e == 2)
		write(1, "Invalid map2\n", 12);
	exit(0);
}

int		main(int argc, char **argv)
{
	t_map	*map;

	if (argc != 2)
		err_out(1);
	if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
		err_out(2);
	ft_valid(argv[1], map);
	map->mid_x = (map->w - 1) * SCALE / 2;
	map->mid_y = (map->h - 1) * SCALE / 2;
	move_center(map);
	create_loop(map);
	exit(0);
}
