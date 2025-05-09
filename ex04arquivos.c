/*Faça um programa que leia o nome do arquivo texto a ser aberto, exemplo:
aula.txt. Se não retornar erro, concatenar a frase: “Este e um arquivo
chamado: “, com o nome do arquivo lido. Gravar essa string no arquivo e
depois abra o arquivo e exiba o texto existente nele.*/
#include<stdio.h>
#include<string.h>
main(){
	FILE *fl;
	char nome[31],frase[60]="Este e um arquivo chamado: ";
	char test[100];
	
	printf("\nqual nome do arquivo(ex:arq.txt): ");fflush(stdin);
	gets(nome);//usuario poe o nome do arquivo
	fl=fopen(nome,"w");//cria o arquivo com o nome 
		if(fl==NULL){
		printf("\nArquivo n pode ser aberto.");
		return 0;
	}
	fclose(fl);
	
	fl=fopen(nome,"w");
	strcat(frase,nome);//abre o arquivo 
	fprintf(fl,frase);//poe a frase e o nome 
	fclose(fl);
	
	fl=fopen(nome,"r");	
	while(fgets(test,100,fl)!=NULL){//vai no arquivo le('r') e devolve aqui
		printf("%s\n",test);
	}
	fclose(fl);
}
