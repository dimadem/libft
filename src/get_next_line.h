/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:56:02 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/11/30 14:08:25 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

typedef struct str_list {
  char *str_buf;
  struct str_list *next;
} c_list;

int find_newline(c_list *list);
c_list *find_last_node(c_list *list);
char *get_line(c_list *list);
void copy_str(c_list *list, char *str);
int len_to_newline(c_list *list);
void check_list(c_list **list);
char *get_next_line(int fd);
void dealloc(c_list **list, c_list *clean_node, char *buf);
void create_list(c_list **list, int fd);

#endif
