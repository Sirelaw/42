/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipopov <ipopov@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:38:06 by ipopov            #+#    #+#             */
/*   Updated: 2021/03/28 23:38:09 by ipopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef _FUNCTIONS_H
 #define _FUNCTIONS_H

 
int	  *atoi(char *str);
void	build_matrix(int *a);
int   check_solution(void);
void	contrad_fill();
void	edge_clue_init(int *arr);
void	fill_a_spot (int *a);
void  ft_print_arr(int *arr, int size);
void	ft_putstr(char *str);
void	ft_rev_int_tab(int *tab, int size);
int   ft_strlen(char *str);
void  init_fill(void);
int   isvalidinput_pre(char *str);
void  itr_solver();
void	pattern_match(int *arr);
int   post_validation(int *arr);
int   pre_validation(char *str);
void  print_matrix(void);
void  transpose(void);


#endif