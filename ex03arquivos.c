/*Faça um programa em C que peça para o usuário o nome de um arquivo txt
(dados.txt ou arq.txt) e exiba a quantidade de caracteres existentes no arquivo*/
#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *file;
	char arq[30],c;
	int cont=0;
	printf("\nQual o nome do Arquivo(dados.txt ou arq.txt): ");fflush(stdin);
	gets(arq);
	file=fopen(arq,"r");
	if(file==NULL){
		printf("ERRO na leitura do arquivo");	
	}else{
		do{
			c=getc(file);
			cont++;
		}while(c!=EOF);
	}
fclose(file);
printf("\nExistem %d Caracteres no arquivo %s ",cont,arq);
}
