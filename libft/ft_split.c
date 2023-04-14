/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: isanders <isanders@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 15:12:41 by isanders      #+#    #+#                 */
/*   Updated: 2022/11/25 15:47:08 by isanders      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_words(char *s, char c)
{
	int	index;
	int	amount_of_words;

	amount_of_words = 0;
	index = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
		{
			index++;
		}
		while (s[index] != c && s[index] != '\0')
		{
			if (s[index +1] == c || s[index +1] == '\0')
			{
				amount_of_words++;
			}
			index++;
		}
	}
	return (amount_of_words);
}

static int	how_many_characters(char *s, char c)
{
	int	index;
	int	amount_of_characters;

	index = 0;
	amount_of_characters = 0;
	while (s[index] != '\0')
	{
		while (s[index] != c && s[index] != '\0')
		{
			amount_of_characters++;
			if (s[index +1] == c || s[index +1] == '\0')
			{
				return (amount_of_characters);
			}
			index++;
		}
		index++;
	}
	return (amount_of_characters);
}

static char	*make_word(char *s, char c)
{
	int		amount_of_characters;
	char	*ptr;

	amount_of_characters = how_many_characters(s, c);
	ptr = ft_calloc(amount_of_characters + 1, sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	ft_strlcpy(ptr, s, amount_of_characters + 1);
	return (ptr);
}

static void	*ft_free(char **ptr)
{	
	int	index;

	index = 0;
	while (ptr[index] != '\0')
	{
		free(ptr[index]);
		index++;
	}
	free(ptr);
	return (0);
}

char	**ft_split(char *s, char c)
{
	int		index;
	int		amount_of_words;
	int		c_characters;
	char	**ptr_to_arrays;

	c_characters = 0;
	index = 0;
	amount_of_words = how_many_words(s, c);
	ptr_to_arrays = ft_calloc(amount_of_words + 1, sizeof(char *));
	if (ptr_to_arrays == NULL)
		return (NULL);
	while (index < amount_of_words)
	{
		while (s[c_characters] == c)
		{
			c_characters++;
		}
		ptr_to_arrays[index] = make_word(s + c_characters, c);
		if (ptr_to_arrays[index] == NULL)
			return (ft_free(ptr_to_arrays));
		s = s + how_many_characters(s, c) + c_characters;
		index++;
		c_characters = 0;
	}
	return (ptr_to_arrays);
}

// int	main(void)
// {
// 	char	s[] = ".hallo..hallo...";
// 	char	c = '.';
// 	char	**ptr_to_arrays;
// 	int	index;

// 	index = 0;
// 	ptr_to_arrays = ft_split(s, c);
// 	while (ptr_to_arrays[index] != NULL)
// 	{
// 		printf("%s\n", ptr_to_arrays[index]);
// 		index++;
// 	}
// 	//printf("%lu\n", sizeof(int **************));
// }
