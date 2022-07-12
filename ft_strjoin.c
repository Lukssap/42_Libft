/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantana <lsantana@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 22:01:48 by lsantana          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/07 01:09:29 by lsantana         ###   ########.fr       */
=======
/*   Updated: 2022/06/28 21:08:34 by lsantana         ###   ########.fr       */
>>>>>>> 512876266ab65f783a8bf19e5c70852be7b73c38
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*new_str;
// 	size_t	s1_len;
// 	size_t	i;

// 	i = 0;
// 	s1_len = ft_strlen(s1);
// 	new_str = (char *)malloc((sizeof(char) * s1_len + ft_strlen(s2) + 1));
// 	if (!new_str)
// 		return (NULL);
// 	ft_strlcpy(new_str, s1, (s1_len + 1));
// 	ft_strlcat(new_str, s2, (s1_len + ft_strlen(s2) + 1));
// 	return (new_str);
// }

<<<<<<< HEAD
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[j + i] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
=======
char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	int		len_s1;
	int		i;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char *));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	joined = (char *) malloc((len_s1 + ft_strlen(s2) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		joined[i] = s1[i];
	i--;
	while (s2[++i - len_s1])
		joined[i] = s2[i - len_s1];
	joined[i] = '\0';
	free(s1);
	return (joined);
>>>>>>> 512876266ab65f783a8bf19e5c70852be7b73c38
}
