#include<stdio.h>
int main(){
	float tab[1000];
	int i,n;
	printf("entrez le nombre d'éléments que vous souhaitez enregistrer dans votre tableau:\n");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	for(i=0;i<=n-1;i++){
		printf("entrez la valeur de l'élément numéro %d \n",i+1);
		fflush(stdout);
		scanf("%f",&tab[i]);
		fflush(stdout);
	}
	printf("votre tableau se présente comme suit:\n tableau[%d] : ",n);
	fflush(stdout);
	for(i=0;i<=n-1;i++){
		printf("%.2f  ",tab[i]);
	}
    printf("\n Votre nouveau tableau se présente comme suit:\ntableau[%d] : ",n);
    for(i=n-1;i>=0;i--){
    	printf("%.2f  ",tab[i]);
	}
	return 0;
}