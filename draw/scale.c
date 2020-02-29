/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 13:38:20 by psigfry           #+#    #+#             */
/*   Updated: 2020/02/29 13:38:22 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_pluscale(t_map *fdf)
{
	int x;
	int y;

	y = 0;
	move_mid(fdf);
	while (y < fdf->h)
	{
		x = 0;
		while (x < fdf->w)
		{
			fdf->points[y][x].x *= fdf->scale;
			fdf->points[y][x].y *= fdf->scale;
			fdf->points[y][x].z *= fdf->scale;
			x++;
		}
		y++;
	}
	move_back(fdf);
}

void			ft_minscale(t_map *fdf)
{
	int x;
	int y;

	y = 0;
	move_mid(fdf);
	while (y < fdf->h)
	{
		x = 0;
		while (x < fdf->w)
		{
			fdf->points[y][x].x /= fdf->scale;
			fdf->points[y][x].y /= fdf->scale;
			fdf->points[y][x].z /= fdf->scale;
			++x;
		}
		y++;
	}
	move_back(fdf);
}
