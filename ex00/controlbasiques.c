void ft_putstr(char *str);
int souscontrol(int nbarg, char **argv);



int controlbasiaues(int nbarg, char **argv)
{
	char *string;
	int i;

	string = "Error\n";
	if (souscontrol(nbarg, argv) == -1)
			return (-1);


	i=0;
	while (i <=30)
	{
		//printf("i=%i\n", i);
		if (!((49 <= argv[1][i]) && (argv[1][i]<= 52)))
		{	
			//ft_putchar(argv[1][i]);
			ft_putstr(string);	
			return (-1);
		}
		i++;
		if ((argv[1][i] != ' ') && (i<30))
		{	
		//	ft_putchar(argv[1][i]);
			ft_putstr(string);	
			return (-1);
		}
		i++;
	}
	return (1);
}	

