/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkharoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:33:09 by mkharoub          #+#    #+#             */
/*   Updated: 2023/09/19 23:40:15 by mkharoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	sw;
	sw = *a;
	*a = *b;
	*b = sw;
}
/*
int 	main(){
	int a = 3;
	int b = 6;
	ft_swap (&a, &b);
	printf ("%d, %d", a, b);
}
*/
