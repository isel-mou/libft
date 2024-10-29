/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-mou <isel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:52:03 by isel-mou          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:05 by isel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_index;
	size_t	match_count;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	haystack_index = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack_index + needle_len <= len && haystack[haystack_index])
	{
		match_count = 0;
		while (match_count < needle_len 
			&& haystack[haystack_index + match_count] == needle[match_count])
			match_count++;
		if (match_count == needle_len)
			return ((char *)&haystack[haystack_index]);
		haystack_index++;
	}
	return (NULL);
}
