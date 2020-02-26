/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:59:03 by psigfry           #+#    #+#             */
/*   Updated: 2020/02/26 20:13:23 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_point
{
	float			x;
	float			y;
	float			z;
	unsigned int	clr;
}					t_point;

typedef struct		s_map
{
	char			*name;
	t_point			**points;
	int				w;
	int				h;
	unsigned int	scale;
	int				mid_x;
	int				mid_y;
}					t_map;