int main(){
	int a,b,c;
	printf("Bonjour cher ami \n");
	printf("entrez les facteur a b c \n");
	scanf("%d%d%d",&a,&b,&c);
	int d = (pow(b,2)) - (4*a*c);
	if(d == 0){
		float x = -b/(2*a);
		printf("l'equation a une seul solution :  %f \n",x);		
	}
	if(d < 0){
		printf("l'equation a aucune solution  \n");
	}
	if(d > 0){
		float x1 = (-b - sqrt(d))/(2*a);
		float x2 = (-b + sqrt(d))/(2*a);
		printf("l'equation a deux solutions : x1 =  %f  x2 = %f \n",x1,x2);
	}
	
	
	
}

