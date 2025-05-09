#include<stdio.h>
int main(){
	FILE *file;
	int x,y,z;
//======== AULA 01=========
	//file=fopen("teste2.txt", "w");
	//fprintf(file,"ola mundo!");
	//fclose(file);
	
//======== AULA 02=========
	//caso eu n soubesse quais os numeros 
	//estao no arquivo somente q sao 3
	file=fopen("numero.txt","r");//r de read/Ler
	
	if(file==NULL){
//se o ponteiro NAO esta apontando em lugar nulo
		printf("\nArquivo n pode ser aberto.");
		return 0;
	}
	
	fscanf(file,"%i %i %i",&x,&y,&z);
	printf("%i %i %i",x,y,z);
	fclose(file);

	
	return 0;
}
