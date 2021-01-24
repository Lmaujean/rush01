/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:17:10 by frouable          #+#    #+#             */
/*   Updated: 2021/01/24 14:41:50 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);
int controlbasiaues(int nbarg, char **argv);
void affectationbordures(int *colup,int *coldown, int *rowleft, int *rowright, char **argv);

typedef struct	
{
	int	mat[4][4];
}s_t_matrice;	


int main(int argc, char **argV)
{
	int colup[4]; 
	int coldown[4];
	int rowleft[4];
	int rowright[4];
	int *matrices=NULL;
	

	if (controlbasiaues(argc, argV) == -1)
	{
		return 0;
	}
	affectationbordures(colup, coldown, rowleft, rowright, argV);
	
	matrices = (int *)malloc(16*sizeof(s_t_matrice));		

	free(matrices);
	return 0;

}	
