/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strl_en.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlikitap <rlikitap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:20:56 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/17 20:27:29 by rlikitap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (a[i])
	{
		if (a[i] != ' ')
			count++;
		i ++;
	}
	return (count);
}
