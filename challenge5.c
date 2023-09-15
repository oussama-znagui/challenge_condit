

int main()
{
	
	int year ,ch;
	int dif,difM;
	
	printf("Bonjour cher ami \n");
	printf("entrez l'annee  \n");
	scanf("%d",&year);
	printf("convertir en \n 1 - Mois \n 2 - Jours \n 3 - Heures \n 4 - Minutes \n 5 - Secondes \n");
	scanf("%d",&ch);
	
	if(year <= 2023){
		
		switch(ch){
		case 1 : 
			dif = 2023 - year;
			difM = dif * 12;
			printf("entre %d et 2023 y a %d mois",year,difM);
			break;
		case 2 : 
			dif = 2023 - year;
			difM = dif * 365;
			printf("entre %d et 2023 y a %d jours",year,difM);
			break;	
		case 3 : 
			dif = 2023 - year;
			difM = dif * 8760;
			printf("entre %d et 2023 y a %d heurs",year,difM);
			break;	
		case 4 : 
			dif = 2023 - year;
			difM = dif * 525600;
			printf("entre %d et 2023 y a %d minutes",year,difM);
			break;
		case 5 : 
			dif = 2023 - year;
			difM = dif * 31536000;
			printf("entre %d et 2023 y a %d minutes",year,difM);
			break;	
	}
	

	return 0;
		
	}
	

	
	
}
