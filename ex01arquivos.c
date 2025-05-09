/*Faça um programa em C que crie um arquivo texto em disco, com o nome
“dados.txt”, e escreva neste arquivo em disco as letras do alfabeto de a até z.
Abra este arquivo em um editor de textos, como por exemplo o Notepad para
verificar se efetuou a gravação das letras.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int i;
	char c;
	FILE *file;
	file=fopen("dados.txt","w");
	for(i=97;i<=122;i++){
		c=i;
		putc(c,file);
	}
	fclose(file);
}
