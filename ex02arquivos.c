/*Crie um programa C que crie/abra um arquivo texto de nome "arq.txt", permita
que o usuário entre com diversos caracteres nesse arquivo, até que o usuário
entre com o caractere ’0’ para encerrar a entrada de caracteres. Feche o arquivo
e abra novamente o arq.txt, e lendo caractere por caractere, e escrevendo na
tela todos os caracteres armazenados no arquivo*/
#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *file;
	char c,ler;
//ESCREVENDO
	file=fopen("arq.txt","w");
	if(file==NULL){
		printf("ERRO na leitura do arquivo");
		
	}else{
		do{
			printf("diga um Caracter ou '0' para sair: ");
			fflush(stdin);
			scanf("%c",&c);
			if(c!='0'){
				putc(c,file);
			}
		}while(c!='0');//para espaço usar apostofro
	}
fclose(file);
//LENDO
		file=fopen("arq.txt","r");
		
		if(file==NULL){
		printf("ERRO na leitura do arquivo");
		}else{
		do{
			ler=getc(file);
			printf("%c",ler);
			
			}while(ler!=EOF);
		
	}
fclose(file);
}
