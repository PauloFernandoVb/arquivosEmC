#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *file;
	int x,y,z;
	//PROBLEMATICA: aqui eu sei q tem 3 numeros no arquivo numeros;
	//porem se eu por um arquivo de string ele da erro!
	file=fopen("teste2.txt","r");//r de read/Ler
	
	if(file==NULL){
		printf("\nArquivo n pode ser aberto.");
		getchar();//para poder ver oque aconteceu na tela;
		exit(0);
	}
	char frase[100];
	while(fgets(frase, 100, file)!= NULL){//fscanf pega ate o \0 fgets pega tudo 
		printf("%s \n",frase);
	}
//o fgtes vai la e le ele devolve algo ate o null
//f==file/ get==pega/  s==string/  enquanto a funçao for diferente de NADA vai fazer o loop
	fclose(file);

	return 0;
}
