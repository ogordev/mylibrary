/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyoksom <anyoksom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:20:47 by ijasinsk          #+#    #+#             */
/*   Updated: 2023/12/13 13:55:33 by anyoksom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

void	my_putchar(char c);
void	my_swap(int *a, int *b);
void	my_sort_int_array(int *tab, int size);

char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char const *to_find);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
char	*my_strdup(char const *src);

int		my_isneg(int nb);
int		my_put_nbr_function(int nb);
int		my_put_nbr(int nb);
int		my_putstr(char const *str);
int		my_strlen(char const *str);
int		my_getnbr(char const *str);
int		my_compute_power_rec(int nb, int power);
int		my_compute_square_root(int nb);
int		my_is_prime(int nb);
int		my_find_prime_sup(int nb);
int		my_strcmp(char const *s1, char const *s2);
int		my_strncmp(char const *s1, char const *s2, int n);
int		my_str_isalpha(char const *str);
int		my_str_isnum(char const *str);
int		my_str_isprintable(char const *str);
int		my_showstr(char const *str);
int		my_showmem(char const *str, int size);
int		my_show_word_array(char const *tab);
int		my_str_isupper(char const *str);
int		my_str_islower(char const *str);

#endif
