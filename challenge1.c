int main(){
	int x;
	printf("Bonjour cher ami \n");
	printf("Entrez x \n");
	scanf("%d",&x);
	int i = x % 2;
	if (i == 0){
		printf("le nombre est paire");
	}
	else{
		printf("le nombre est inpaire");
	}
}
