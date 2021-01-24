//#include <stdio.h>

void affectationbordures(int *colup,int *coldown, int *rowleft, int *rowright, char **argv)
{
	int i;
	int j;
	
	i=0;
	while (i <=6)
	{
		j=i/2;
		colup[j]=argv[1][i]-48;
//		printf("colup%i= %i\n",j, colup[j]);
		coldown[j]=argv[1][i+8]-48;
//		printf("coldown%i= %i\n",j, coldown[j]);
		rowleft[j]=argv[1][i+16]-48;
//		printf("rowleft%i= %i\n",j, rowleft[j]);
		rowright[j]=argv[1][i+24]-48;
//		printf("rowright%i= %i\n",j, rowright[j]);
		i+=2;
	}	
}	


