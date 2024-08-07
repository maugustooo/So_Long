/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:15:54 by prossi            #+#    #+#             */
/*   Updated: 2024/07/04 14:31:19 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include "minilibx-linux/mlx.h"
# include "minilibx-linux/mlx_int.h"
# include "libft/libft.h"

typedef struct t_variables
{
	void	*mlx;
	void	*window;

	int		fd;
	int		heightmap;
	int		widthmap;
	int		i;
	int		j;
	int		collectables;
	int		collectables_check;
	int		exit_visit;
	int		moves;
	int		mflag;
	int		p_count;
	int		e_count;
	int		c_count;

	char	**map;

	void	*floor;
	void	*wall;
	void	*guy_in_wall;
	void	*m1;
	void	*m2;
	void	*m3;
	void	*m4;
	void	*player1;
	void	*collectable;
	void	*exit;
}	t_idk;

int		map_reading(t_idk *game, char **argv);
void	put_img_in_game(t_idk *game);
int		controls(int key_code, t_idk *game);
int		exit_game(t_idk *game);
int		check_errors(t_idk *game);
int		put_imgs_to_variables(t_idk *game);
int		check_path(t_idk *game);
#endif