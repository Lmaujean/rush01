void ft_putstr(char *str);


int souscontrol(int nbarg, char **argv)
{
	char *string;
	int lginput;

	string = "Error\n";
	if (nbarg != 2 ) 
	{	
		ft_putstr(string);	
		return (-1);
	}

	lginput=0;
	while ( argv[1][lginput] != '\0')
		lginput++;
	if (lginput != 31)
	{	
		//ft_putstr("pb longeur");
		ft_putstr(string);	
		return (-1);
	}
	return (1);
}	

