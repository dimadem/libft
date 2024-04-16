/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:56:02 by dmdemirk          #+#    #+#             */
/*   Updated: 2024/04/16 12:02:59 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct str_list
{
	char			*str_buf;
	struct str_list	*next;
}				t_str_list;

int			find_newline(t_str_list *list);
t_str_list	*find_last_node(t_str_list *list);
char		*get_line(t_str_list *list);
void		copy_str(t_str_list *list, char *str);
int			len_to_newline(t_str_list *list);
void		check_list(t_str_list **list);
char		*get_next_line(int fd);
void		dealloc(t_str_list **list, t_str_list *clean_node, char *buf);
void		create_list(t_str_list **list, int fd);

#endif
