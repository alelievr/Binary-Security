/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse-me.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelievr <alelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 03:03:46 by alelievr          #+#    #+#             */
/*   Updated: 2017/04/11 20:45:19 by alelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_crypt
{
	int16_t		val;
	int16_t		key;
}					t_crypt;

static t_crypt		c __attribute__ ((section ("__text,__text"))) = {1546481215, 0x42};

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			c.val += *av[1];
			c.val ^= c.key;
			av[1]++;
		}
		if ((c.val & 15) == 0x9)
			if ((c.val & 240) == 0x20)
				if ((c.val & 3840) == 0x100)
					if ((c.val & 61440) == 0x0)
						return 1;
	}
	return 0;
}
