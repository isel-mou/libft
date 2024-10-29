/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-mou <isel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:03:42 by isel-mou          #+#    #+#             */
/*   Updated: 2024/10/28 18:11:27 by isel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *location, int byte, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)location)[i] = (unsigned char)byte;
		i++;
	}
	return (location);
}

/* int main()
{
	int	a;

	char *b = &a;
	
	memset(b, 1, 1);
	memset(b+1, 1, 1);
} */