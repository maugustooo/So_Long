/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_machines_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:54:31 by maugusto          #+#    #+#             */
/*   Updated: 2024/07/04 12:51:56 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	put_walkers_and_fatguy(t_idk *game, int height, int width)
{
	if (game->map[height][width] == '1' && game->flag == 4 && height >= 1
		&& width >= 1 && height < game->heightmap && width < game->widthmap
		&& (height != game->heightmap - 2 || width >= 5))
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m6, width * 124,
			height * 124);
		game->flag = 0;
	}
	if (game->map[height][width] == '1' && height == 1 && width == 9)
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m1,
			width * 124, height * 124);
		game->flag++;
		return ;
	}
	if (game->map[height][width] == '1' && height == game->heightmap - 2
		&& width < 5)
		mlx_put_image_to_window(game->mlx, game->window, game->m3,
			width * 124, height * 124);
}

void	put_machinesv2(t_idk *game, int height, int width)
{
	if (game->map[height][width] == '1' && game->flag == 2 && height >= 1
		&& width >= 1 && height < game->heightmap && width < game->widthmap - 1
		&& (height != game->heightmap - 2 || width >= 5))
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m4, width * 124,
			height * 124);
		game->flag++;
		return ;
	}
	if (game->map[height][width] == '1' && game->flag == 3 && height >= 1
		&& width >= 1 && height < game->heightmap && width < game->widthmap
		&& (height != game->heightmap - 2 || width >= 5))
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m5,
			width * 124, height * 124);
		game->flag++;
		return ;
	}
}

void	put_machines(t_idk *game, int height, int width)
{
	if (game->map[height][width] == '1' && game->flag == 0 && height >= 1
		&& width >= 1 && height < game->heightmap && width < game->widthmap
		&& (height != game->heightmap - 2 || width >= 5))
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m1,
			width * 124, height * 124);
		game->flag++;
		return ;
	}
	if (game->map[height][width] == '1' && game->flag == 1 && height >= 1
		&& width > 1 && height < game->heightmap && width < game->widthmap
		&& (height != game->heightmap - 2 || width >= 5))
	{
		mlx_put_image_to_window(game->mlx, game->window, game->m2, width * 124,
			height * 124);
		game->flag++;
		return ;
	}
	put_machinesv2(game, height, width);
	put_walkers_and_fatguy(game, height, width);
}
