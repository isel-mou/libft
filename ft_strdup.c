/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-mou <isel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:49:48 by isel-mou          #+#    #+#             */
/*   Updated: 2024/10/29 16:29:44 by isel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *original_str)
{
	char	*duplicate;

	duplicate = malloc(ft_strlen(original_str) + 1);
	if (!duplicate)
		return (NULL);
	ft_strlcpy(duplicate, original_str, ft_strlen(original_str) + 1);
	return (duplicate);
}
